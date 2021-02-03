README.txt
==========

The EZ-PZ is a retrobrew eZ80 board.

The CPU is a Zilog eZ80 running at 50 MHz, with 512 Kb of zero-wait state
RAM. An STM32 provides two USB UARTs and a Zilog ZDI controller. An SD card
is on board.

Contents
========

  o Supported compiler
  o Configurations
    - Common Configuration Notes
    - Configuration Subdirectories

Supported compiler
========================

The EZ-PZ supports ez80-clang.

Configurations
==============

Common Configuration Notes
--------------------------

  1. src/ and include/

     These directories contain common logic for all EZ-PZ configurations.

  2. Variations on the basic EZ-PZ configuration are maintained
     in subdirectories.  To configure any specific configuration, do the
     following steps:

       tools/configure.sh [OPTIONS] ezpz:<sub-directory>
       make

     Where <sub-directory> is the specific board configuration that you
     wish to build.  Use 'tools/configure.sh -h' to see the possible
     options.  Typical options are:

       -l Configure for a Linux host
       -m Configure for a Mac OS X hot

     Use configure.bat instead of configure.sh if you are building in a
     native Windows environment.

     The available board-specific configurations are  summarized in the
     following paragraphs.

     When the build completes successfully, you will find this files in
     the top level nuttx directory:

     a. nuttx.hex - A loadable file in Intel HEX format
     b. nuttx.bin - A loadable file in raw binary format
     c. nuttx.map - A linker map file

  3. This configuration uses the mconf-based configuration tool.  To
     change this configurations using that tool, you should:

     a. Build and install the kconfig-mconf tool.  See nuttx/README.txt
        see additional README.txt files in the NuttX tools repository.

     b. Execute 'make menuconfig' in nuttx/ in order to start the
        reconfiguration process.

Configuration Subdirectories
----------------------------

  nsh_flash, nsh_ram:

    These configuration build the NuttShell (NSH).  That code can be
    found in apps/system/nsh and apps/system/nshlib..  For more
    information see:  apps/system/nsh/README.txt and
    Documentation/NuttShell.html.

    NOTES:

    1. The two configurations different only in that one builds for
       execution entirely from FLASH and the other for execution entirely
       from RAM.  A bootloader of some kind is required to support such
       execution from RAM!  This difference is reflected in a single
       configuration setting:

         CONFIG_BOOT_RUNFROMFLASH=y    # Execute from flash (default)
         CONFIG_BOOT_RUNFROMEXTSRAM=y  # Execute from external SRAM

       A third configuration is possible but not formalized with its own
       defconfig file:  You can also configure the code to boot from FLASH,
       copy the code to external SRAM, and then execute from RAM.  Such a
       configuration needs the following settings in the .config file:

         CONFIG_BOOT_RUNFROMEXTSRAM=y  # Execute from external SRAM
         CONFIG_MAKERLISP_COPYTORAM=y  # Boot from FLASH but copy to SRAM

       Why execute from SRAM at all?  Because you will get MUCH better
       performance because of the zero wait state SRAM implementation.

    2. A serial console is provided on UART0.

       The default baud setting is 115200N1.

    3. The eZ80 RTC, the procFS file system, and SD card support in included.
       The procFS file system will be auto-mounted at /proc when the board
       boots.

       The RTC can be read and set from the NSH date command.

         nsh> date
         Thu, Dec 19 20:53:29 2086
         nsh> help date
         date usage:  date [-s "MMM DD HH:MM:SS YYYY"]
         nsh> date -s "Jun 16 15:09:00 2019"
         nsh> date
         Sun, Jun 16 15:09:01 2019

       When the system boots, it will probe the SD card and create a
       block driver called mmcsd0:

         nsh> ls /dev
         /dev:
          console
          mmcsd0
          null
          ttyS0
         nsh> mount
           /proc type procfs

       The SD card can be mounted with the following NSH mount command:

         nsh> mount -t vfat /dev/mmcsd0 /mnt/sdcard
         nsh> ls /mnt
         /mnt:
          sdcard/
         nsh> mount
           /mnt/sdcard type vfat
           /proc type procfs
         nsh> ls -lR /mnt/sdcard
         /mnt/sdcard:
          drw-rw-rw-       0 System Volume Information/
         /mnt/sdcard/System Volume Information:
          -rw-rw-rw-      76 IndexerVolumeGuid
          -rw-rw-rw-      12 WPSettings.dat

       You can they use the SD card as any other file system.

         nsh> ls /mnt/sdcard
         /mnt/sdcard:
          System Volume Information/
         nsh> echo "This is a test" >/mnt/sdcard/atest.txt
         nsh> ls /mnt/sdcard
         /mnt/sdcard:
          System Volume Information/
          atest.txt
         nsh> cat /mnt/sdcard/atest.txt
         This is a test

       Don't forget to un-mount the volume before power cycling:

         nsh> mount
           /mnt/sdcard type vfat
           /proc type procfs
         nsh> umount /mnt/sdcard
         nsh> mount
           /proc type procfs

       NOTE:  The is no card detect signal so the microSD card must be
       placed in the card slot before the system is started.

  sdboot

    This configuration implements a very simple boot loader.  In runs from
    FLASH and simply initializes the external SRAM, mounts the FAT file
    system on the SD card, and checks to see if there is a file called
    nuttx.hex on the SD card.  If so, it will load the Intel HEX file into
    memory and jump to address 0x040000.  This, of course, assumes that
    the application's reset vector resides at address 0x040000 in external
    SRAM.

    The boot loader source is located at boards/ezpz/src/sd_main.c.

