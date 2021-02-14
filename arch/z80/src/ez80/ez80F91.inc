
/************************************************************************************
 * arch/z80/src/ez80/ez80f91.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License. *
 ************************************************************************************/

/************************************************************************************
 * Included Files
 ************************************************************************************/

	;.include "ez80f91_emac.inc"

/* Product ID Registers  ************************************************************/

EZ80_ZDI_ID_L		EQU	0x00
EZ80_ZDI_ID_H		EQU	0x01
EZ80_ZDI_ID_REV		EQU	0x02

/* Interrupt Registers  *************************************************************/

EZ80_INT_P0		EQU	0x10
EZ80_INT_P1		EQU	0x11
EZ80_INT_P2		EQU	0x12
EZ80_INT_P3		EQU	0x13
EZ80_INT_P4		EQU	0x14
EZ80_INT_P5		EQU	0x15

/* EMACC Registers  *****************************************************************/

EZ80_EMAC_TEST		EQU	0x20  /* EMAC test register */
EZ80_EMAC_CFG1		EQU	0x21  /* EMAC configuration 1 register */
EZ80_EMAC_CFG2		EQU	0x22  /* EMAC configuration 2 register */
EZ80_EMAC_CFG3		EQU	0x23  /* EMAC configuration 3 register */
EZ80_EMAC_CFG4		EQU	0x24  /* EMAC configuration 4 register */
EZ80_EMAC_STAD_0	EQU	0x25  /* EMAC station address register 0 */
EZ80_EMAC_STAD_1	EQU	0x26  /* EMAC station address register 1 */
EZ80_EMAC_STAD_2	EQU	0x27  /* EMAC station address register 2 */
EZ80_EMAC_STAD_3	EQU	0x28  /* EMAC station address register 3 */
EZ80_EMAC_STAD_4	EQU	0x29  /* EMAC station address register 4 */
EZ80_EMAC_STAD_5	EQU	0x2a  /* EMAC station address register 5 */
EZ80_EMAC_TPTV_L	EQU	0x2b  /* Transit pause timer value (low) */
EZ80_EMAC_TPTV_H	EQU	0x2c  /* Transit pause timer value (high) */
EZ80_EMAC_IPGT		EQU	0x2d  /* EMAC Interpacket gap register */
EZ80_EMAC_IPGR1		EQU	0x2e  /* Non-back-to-back IPG register 1 */
EZ80_EMAC_IPGR2		EQU	0x2f  /* Non-back-to-back IPG register 2 */
EZ80_EMAC_MAXF_L	EQU	0x30  /* EMAC maximum frame length register (low) */
EZ80_EMAC_MAXF_H	EQU	0x31  /* EMAC maximum frame length register (high) */
EZ80_EMAC_AFR		EQU	0x32  /* EMAC address filter register */
EZ80_EMAC_HTBL_0	EQU	0x33  /* EMAC hash table register 0 */
EZ80_EMAC_HTBL_1	EQU	0x34  /* EMAC hash table register 1 */
EZ80_EMAC_HTBL_2	EQU	0x35  /* EMAC hash table register 2 */
EZ80_EMAC_HTBL_3	EQU	0x36  /* EMAC hash table register 3 */
EZ80_EMAC_HTBL_4	EQU	0x37  /* EMAC hash table register 4 */
EZ80_EMAC_HTBL_5	EQU	0x38  /* EMAC hash table register 5 */
EZ80_EMAC_HTBL_6	EQU	0x39  /* EMAC hash table register 6 */
EZ80_EMAC_HTBL_7	EQU	0x3a  /* EMAC hash table register 7 */
EZ80_EMAC_MIIMGT	EQU	0x3b  /* EMACS MII management register */
EZ80_EMAC_CTLD_L	EQU	0x3c  /* PHY configuration data register (low) */
EZ80_EMAC_CTLD_H	EQU	0x3d  /* PHY configuration data register (high) */
EZ80_EMAC_RGAD		EQU	0x3e  /* PHY address register */
EZ80_EMAC_FIAD		EQU	0x3f  /* PHY unit select register */
EZ80_EMAC_PTMR		EQU	0x40  /* EMAC transmit polling timer register */
EZ80_EMAC_RST		EQU	0x41  /* EMAC reset control register */
EZ80_EMAC_TLBP_L	EQU	0x42  /* EMAC transmit lower boundary pointer (low) */
EZ80_EMAC_TLBP_H	EQU	0x43  /* EMAC transmit lower boundary pointer (high) */
EZ80_EMAC_BP_L		EQU	0x44  /* EMAC boundary pointer register (low) */
EZ80_EMAC_BP_H		EQU	0x45  /* EMAC boundary pointer register (high) */
EZ80_EMAC_BP_U		EQU	0x46  /* EMAC boundary pointer register (upper byte) */
EZ80_EMAC_RHBP_L	EQU	0x47  /* EMAC receive high boundary pointer register (low) */
EZ80_EMAC_RHBP_H	EQU	0x48  /* EMAC receive high boundary pointer register (high) */
EZ80_EMAC_RRP_L		EQU	0x49  /* EMAC receive read pointer (low) */
EZ80_EMAC_RRP_H		EQU	0x4a  /* EMAC receive read pointer (high) */
EZ80_EMAC_BUFSZ		EQU	0x4b  /* EMAC buffer size register */
EZ80_EMAC_IEN		EQU	0x4c  /* EMAC interrupt enable register */
EZ80_EMAC_ISTAT		EQU	0x4d  /* EMAC interrupt status register */
EZ80_EMAC_PRSD_L	EQU	0x4e  /* PHY read status data register (low) */
EZ80_EMAC_PRSD_H	EQU	0x4f  /* PHY read status data register (high) */
EZ80_EMAC_MIISTAT	EQU	0x50  /* EMAC MII status register */
EZ80_EMAC_RWP_L		EQU	0x51  /* EMAC receive write pointer (low) */
EZ80_EMAC_RWP_H		EQU	0x52  /* EMAC receive write pointer (high) */
EZ80_EMAC_TRP_L		EQU	0x53  /* EMAC transmit read pointer (low) */
EZ80_EMAC_TRP_H		EQU	0x54  /* EMAC transmit read pointer (high) */
EZ80_EMAC_BLKSLFT_L	EQU	0x55  /* EMAC receive blocks left register (low) */
EZ80_EMAC_BLKSLFT_H	EQU	0x56  /* EMAC receive blocks left register (high) */
EZ80_EMAC_FDATA_L	EQU	0x57  /* EMAC FIFO data register (low) */
EZ80_EMAC_FDATA_H	EQU	0x58  /* EMAC FIFO data register (high) */
EZ80_EMAC_FFLAGS	EQU	0x59  /* EMAC FIFO flags register */

/* PLL Registers  *******************************************************************/

EZ80_PLL_DIV_L		EQU	0x5c
EZ80_PLL_DIV_H		EQU	0x5d
EZ80_PLL_CTL0		EQU	0x5e
EZ80_PLL_CTL1		EQU	0x5f

/* Timer Registers  *****************************************************************/

EZ80_TMR0_CTL		EQU	0x60        /* RW: Timer 0 control register */
EZ80_TMR0_IER		EQU	0x61        /* RW: Timer 0 interrupt enable register */
EZ80_TMR0_IIR		EQU	0x62        /* R : Timer 0 interrupt ID register */
EZ80_TMR0_DRL		EQU	0x63        /* R : Timer 0 data register (low) */
EZ80_TMR0_DRH		EQU	0x64        /* R : Timer 0 data register (high) */
EZ80_TMR0_RRL		EQU	0x63        /*  W: Timer 0 reload register (low) */
EZ80_TMR0_RRH		EQU	0x64        /*  W: Timer 0 reload register (high) */

EZ80_TMR1_CTL		EQU	0x65        /* RW: Timer 1 control register */
EZ80_TMR1_IER		EQU	0x66        /* RW: Timer 1 interrupt enable register */
EZ80_TMR1_IIR		EQU	0x67        /* R : Timer 1 interrupt ID register */
EZ80_TMR1_DRL		EQU	0x68        /* R : Timer 1 data register (low) */
EZ80_TMR1_DRH		EQU	0x69        /* R : Timer 1 data register (high) */
EZ80_TMR1_RRL		EQU	0x68        /*  W: Timer 1 reload register (low) */
EZ80_TMR1_RRH		EQU	0x69        /*  W: Timer 1 reload register (high) */
EZ80_TMR1_CAPCTL	EQU	0x6a        /* RW: Timer 1 input capture control register */
EZ80_TMR1_CAPAL		EQU	0x6b        /* R : Timer 1 capture input value A (low) */
EZ80_TMR1_CAPAH		EQU	0x6c        /* R : Timer 1 capture input value A (high) */
EZ80_TMR1_CAPBL		EQU	0x6d        /* R : Timer 1 capture input value B (low) */
EZ80_TMR1_CAPBH		EQU	0x6e

EZ80_TMR2_CTL		EQU	0x6f        /* RW: Timer 2 control register */
EZ80_TMR2_IER		EQU	0x70        /* RW: Timer 2 interrupt enable register */
EZ80_TMR2_IIR		EQU	0x71        /* R : Timer 2 interrupt ID register */
EZ80_TMR2_DRL		EQU	0x72        /* R : Timer 2 data register (low) */
EZ80_TMR2_DRH		EQU	0x73        /* R : Timer 2 data register (high) */
EZ80_TMR2_RRL		EQU	0x72        /*  W: Timer 2 reload register (low) */
EZ80_TMR2_RRH		EQU	0x73        /*  W: Timer 2 reload register (high) */

EZ80_TMR3_CTL		EQU	0x74        /* RW: Timer 3 control register */
EZ80_TMR3_IER		EQU	0x75        /* RW: Timer 3 interrupt enable register */
EZ80_TMR3_IIR		EQU	0x76        /* R : Timer 3 interrupt ID register */
EZ80_TMR3_DRL		EQU	0x77        /* R : Timer 3 data register (low) */
EZ80_TMR3_DRH		EQU	0x78        /* R : Timer 3 data register (high) */
EZ80_TMR3_RRL		EQU	0x77        /*  W: Timer 3 reload register (low) */
EZ80_TMR3_RRH		EQU	0x78        /*  W: Timer 3 reload register (high) */
EZ80_TMR3_CAPCTL	EQU	0x7b        /* RW: Timer 3 input capture control register */
EZ80_TMR3_CAPAL		EQU	0x7c        /* R : Timer 3 capture input value A (low) */
EZ80_TMR3_CAPAH		EQU	0x7d        /* R : Timer 3 capture input value A (high) */
EZ80_TMR3_CAPBL		EQU	0x7e        /* R : Timer 3 capture input value B (low) */
EZ80_TMR3_CAPBH		EQU	0x7f        /* R : Timer 3 capture input value B (high) */
EZ80_TMR3_OCCTL1	EQU	0x80        /* RW: Timer 3 output compare control register1 */
EZ80_TMR3_OCCTL2	EQU	0x81        /* RW: Timer 3 output compare control register2 */
EZ80_TMR3_OC0L		EQU	0x82        /* RW: Timer 3 output compare value 0 (low) */
EZ80_TMR3_OC0H		EQU	0x83        /* RW: Timer 3 output compare value 0 (high) */
EZ80_TMR3_OC1L		EQU	0x84        /* RW: Timer 3 output compare value 1 (low) */
EZ80_TMR3_OC1H		EQU	0x85        /* RW: Timer 3 output compare value 1 (high) */
EZ80_TMR3_OC2L		EQU	0x86        /* RW: Timer 3 output compare value 2 (low) */
EZ80_TMR3_OC2H		EQU	0x87        /* RW: Timer 3 output compare value 2 (high) */
EZ80_TMR3_OC3L		EQU	0x88        /* RW: Timer 3 output compare value 3 (low) */
EZ80_TMR3_OC3H		EQU	0x89        /* RW: Timer 3 output compare value 3 (high) */

/* TMR0/1/2/3 CTL Register Bit Definitions ******************************************/

EZ80_TMRCTL_BRKSTOP	EQU	0x80        /* Bit 7: Stop timer for debug operation */
EZ80_TMRCTL_CLKSEL	EQU	0x60        /* Bits 6-5: Timer source */
EZ80_TMRCLKSEL_SYSCLK	EQU	0x00       /*   00: System clock divided by prescaler */
EZ80_TMRCLKSEL_RTC	EQU	0x20        /*   01: Real time clock input */
EZ80_TMRCLKSEL_ECF	EQU	0x40        /*   10: Event count input, falling edge */
EZ80_TMRCLKSEL_ECR	EQU	0x60        /*   11: Event count input, rising edge */
EZ80_TMRCTL_CLKDIV	EQU	0x18        /* Bits 3-4: System clock divider */
EZ80_TMRCLKDIV_4	EQU	0x00        /*   00:   4 */
EZ80_TMRCLKDIV_16	EQU	0x08        /*   01:  16 */
EZ80_TMRCLKDIV_64	EQU	0x10        /*   10:  64 */
EZ80_TMRCLKDIV_256	EQU	0x18        /*   11: 256 */
EZ80_TMRCTL_TIMCONT	EQU	0x04        /* Bit 2: Continuous mode */
EZ80_TMRCTL_RLD		EQU	0x02        /* Bit 1: Force reload */
EZ80_TMRCTL_TIMEN	EQU	0x01        /* Bit 0: Programmable reload timer enabled */

/* TMR0/1/2/3 IER Register Bit Definitions ******************************************/

                                           /* Bit 7: Reserved */
EZ80_TMRIER_OC3EN	EQU	0x40        /* Bit 6: TMR3 OC3 enabled */
EZ80_TMRIER_OC2EN	EQU	0x20        /* Bit 5: TMR3 OC2 enabled */
EZ80_TMRIER_OC1EN	EQU	0x10        /* Bit 4: TMR3 OC1 enabled */
EZ80_TMRIER_OC0EN	EQU	0x08        /* Bit 3: TMR3 OC0 enabled */
EZ80_TMRIER_ICBEN	EQU	0x04        /* Bit 2: TMR1/3 capture pin enabled */
EZ80_TMRIER_ICAEN	EQU	0x02        /* Bit 1: TMR1/3 capture pin enabled */
EZ80_TMRIER_EOCEN	EQU	0x01        /* Bit 0: End of count interrupt enabled */

/* TMR0/1/2/3 IER Register Bit Definitions ******************************************/

                                           /* Bit 7: Reserved */
EZ80_TMRIIR_OC3		EQU	0x40        /* Bit 6: TMR3 OC3 */
EZ80_TMRIIR_OC2		EQU	0x20        /* Bit 5: TMR3 OC2 */
EZ80_TMRIIR_OC1		EQU	0x10        /* Bit 4: TMR3 OC1 */
EZ80_TMRIIR_OC0		EQU	0x08        /* Bit 3: TMR3 OC0 */
EZ80_TMRIIR_ICB		EQU	0x04        /* Bit 2: TMR1/3 capture pin */
EZ80_TMRIIR_ICA		EQU	0x02        /* Bit 1: TMR1/3 capture pin */
EZ80_TMRIIR_EOC		EQU	0x01        /* Bit 0: End of count interrupt */

/* PWM Registers ********************************************************************/

EZ80_PWM_CTL1		EQU	0x79
EZ80_PWM_CTL2		EQU	0x7a
EZ80_PWM_CTL3		EQU	0x7b
EZ80_PWM0R_L		EQU	0x7c
EZ80_PWM0R_H		EQU	0x7d
EZ80_PWM1R_L		EQU	0x7e
EZ80_PWM1R_H		EQU	0x7f
EZ80_PWM2R_L		EQU	0x80
EZ80_PWM2R_H		EQU	0x81
EZ80_PWM3R_L		EQU	0x82
EZ80_PWM3R_H		EQU	0x83
EZ80_PWM0F_L		EQU	0x84
EZ80_PWM0F_H		EQU	0x85
EZ80_PWM1F_L		EQU	0x86
EZ80_PWM1F_H		EQU	0x87
EZ80_PWM2F_L		EQU	0x88
EZ80_PWM2F_H		EQU	0x89
EZ80_PWM3F_L		EQU	0x8a
EZ80_PWM3F_H		EQU	0x8b

/* WDT Registers ********************************************************************/

EZ80_WDT_CTL		EQU	0x93
EZ80_WDT_RR		EQU	0x94

/* GPIO Registers *******************************************************************/

EZ80_PA_DR		EQU	0x96
EZ80_PA_DDR		EQU	0x97
EZ80_PA_ALT0		EQU	0xa6
EZ80_PA_ALT1		EQU	0x98
EZ80_PA_ALT2		EQU	0x99
EZ80_PB_DR		EQU	0x9a
EZ80_PB_DDR		EQU	0x9b
EZ80_PB_ALT0		EQU	0xa7
EZ80_PB_ALT1		EQU	0x9c
EZ80_PB_ALT2		EQU	0x9d
EZ80_PC_DR		EQU	0x9e
EZ80_PC_DDR		EQU	0x9f
EZ80_PC_ALT0		EQU	0xce
EZ80_PC_ALT1		EQU	0xa0
EZ80_PC_ALT2		EQU	0xa1
EZ80_PD_DR		EQU	0xa2
EZ80_PD_DDR		EQU	0xa3
EZ80_PD_ALT0		EQU	0xcf
EZ80_PD_ALT1		EQU	0xa4
EZ80_PD_ALT2		EQU	0xa5

/* CS Registers *********************************************************************/

EZ80_CS0_LBR		EQU	0xa8
EZ80_CS0_UBR		EQU	0xa9
EZ80_CS0_CTL		EQU	0xaa
EZ80_CS1_LBR		EQU	0xab
EZ80_CS1_UBR		EQU	0xac
EZ80_CS1_CTL		EQU	0xad
EZ80_CS2_LBR		EQU	0xae
EZ80_CS2_UBR		EQU	0xaf
EZ80_CS2_CTL		EQU	0xb0
EZ80_CS3_LBR		EQU	0xb1
EZ80_CS3_UBR		EQU	0xb2
EZ80_CS3_CTL		EQU	0xb3

/* RAMCTL reggisters ****************************************************************/

EZ80_RAM_CTL		EQU	0xb4
EZ80_RAM_CTL0		EQU	0xb4
EZ80_RAM_ADDR_U		EQU	0xb5
EZ80_MBIST_GPR		EQU	0xb6
EZ80_MBIST_EMR		EQU	0xb7

/* RAMCTL bit definitions ***********************************************************/

RAMCTL_ERAMEN		EQU	(1 << 6) /* Bit 7: 1=On chip EMAC SRAM is enabled */
RAMCTL_GPRAMEN		EQU	(1 << 7) /* Bit 7: 1=On chip GP SRAM is enabled */

/* SPI Registers ********************************************************************/

EZ80_SPI_BRG_L		EQU	0xb8
EZ80_SPI_BRG_H		EQU	0xb9
EZ80_SPI_CTL		EQU	0xba
EZ80_SPI_SR		EQU	0xbb
EZ80_SPI_RBR		EQU	0xbc
EZ80_SPI_TSR		EQU	0xbc

/* UART Register Offsets ************************************************************/

                                           /* DLAB=0: */
EZ80_UART_THR		EQU	0x00        /*    W: UART Transmit holding register */
EZ80_UART_RBR		EQU	0x00        /*   R : UART Receive buffer register */
EZ80_UART_IER		EQU	0x01        /*   RW: UART Interrupt enable register */
                                           /* DLAB=1: */
EZ80_UART_BRG		EQU	0x00        /*   RW: UART Baud rate generator register */
EZ80_UART_BRGL		EQU	0x00        /*   RW: UART Baud rate generator register (low) */
EZ80_UART_BRGH		EQU	0x01        /*   RW: UART Baud rate generator register (high) */
                                           /* DLAB=N/A: */
EZ80_UART_IIR		EQU	0x02        /*   R : UART Interrupt identification register */
EZ80_UART_FCTL		EQU	0x02        /*    W: UART FIFO control register */
EZ80_UART_LCTL		EQU	0x03        /*   RW: UART Line control register */
EZ80_UART_MCTL		EQU	0x04        /*   RW: UART Modem control register */
EZ80_UART_LSR		EQU	0x05        /*   R : UART Line status register */
EZ80_UART_MSR		EQU	0x06        /*   R : UART Modem status register */
EZ80_UART_SPR		EQU	0x07        /*   RW: UART Scratchpad register */

/* UART0/1 Base Register Addresses **************************************************/

EZ80_UART0_BASE		EQU	0xc0
EZ80_UART1_BASE		EQU	0xd0

/* UART0/1 Register Addresses *******************************************************/

EZ80_UART0_THR		EQU	EZ80_UART0_BASE + EZ80_UART_THR
EZ80_UART0_RBR		EQU	EZ80_UART0_BASE + EZ80_UART_RBR
EZ80_UART0_IER		EQU	EZ80_UART0_BASE + EZ80_UART_IER
EZ80_UART0_BRG		EQU	EZ80_UART0_BASE + EZ80_UART_BRG
EZ80_UART0_BRGL		EQU	EZ80_UART0_BASE + EZ80_UART_BRGL
EZ80_UART0_BRGH		EQU	EZ80_UART0_BASE + EZ80_UART_BRGH
EZ80_UART0_IIR		EQU	EZ80_UART0_BASE + EZ80_UART_IIR
EZ80_UART0_FCTL		EQU	EZ80_UART0_BASE + EZ80_UART_FCTL
EZ80_UART0_LCTL		EQU	EZ80_UART0_BASE + EZ80_UART_LCTL
EZ80_UART0_MCTL		EQU	EZ80_UART0_BASE + EZ80_UART_MCTL
EZ80_UART0_LSR		EQU	EZ80_UART0_BASE + EZ80_UART_LSR
EZ80_UART0_MSR		EQU	EZ80_UART0_BASE + EZ80_UART_MSR
EZ80_UART0_SPR		EQU	EZ80_UART0_BASE + EZ80_UART_SPR

EZ80_UART1_THR		EQU	EZ80_UART1_BASE + EZ80_UART_THR
EZ80_UART1_RBR		EQU	EZ80_UART1_BASE + EZ80_UART_RBR
EZ80_UART1_IER		EQU	EZ80_UART1_BASE + EZ80_UART_IER
EZ80_UART1_BRG		EQU	EZ80_UART1_BASE + EZ80_UART_BRG
EZ80_UART1_BRGL		EQU	EZ80_UART1_BASE + EZ80_UART_BRGL
EZ80_UART1_BRGH		EQU	EZ80_UART1_BASE + EZ80_UART_BRGH
EZ80_UART1_IIR		EQU	EZ80_UART1_BASE + EZ80_UART_IIR
EZ80_UART1_FCTL		EQU	EZ80_UART1_BASE + EZ80_UART_FCTL
EZ80_UART1_LCTL		EQU	EZ80_UART1_BASE + EZ80_UART_LCTL
EZ80_UART1_MCTL		EQU	EZ80_UART1_BASE + EZ80_UART_MCTL
EZ80_UART1_LSR		EQU	EZ80_UART1_BASE + EZ80_UART_LSR
EZ80_UART1_MSR		EQU	EZ80_UART1_BASE + EZ80_UART_MSR
EZ80_UART1_SPR		EQU	EZ80_UART1_BASE + EZ80_UART_SPR

/* UART0/1 IER register bits ********************************************************/

EZ80_UARTEIR_INTMASK	EQU	0x1f         /* Bits 5-7: Reserved */
EZ80_UARTEIR_TCIE	EQU	0x10         /* Bit 4: Transmission complete interrupt */
EZ80_UARTEIR_MIIE	EQU	0x08         /* Bit 3: Modem status input interrupt */
EZ80_UARTEIR_LSIE	EQU	0x04         /* Bit 2: Line status interrupt */
EZ80_UARTEIR_TIE	EQU	0x02         /* Bit 1: Transmit interrupt */
EZ80_UARTEIR_RIE	EQU	0x01         /* Bit 0: Receive interrupt */

/* UART0/1 IIR register bits ********************************************************/

EZ80_UARTIIR_FSTS	EQU	0x80         /* Bit 7: FIFO enable */
                                            /* Bits 4-6: Reserved */
EZ80_UARTIIR_INSTS	EQU	0x0e         /* Bits 1-3: Interrupt status code */
EZ80_UARTINSTS_CTO	EQU	0x0c         /*   110: Character timeout */
EZ80_UARTINSTS_TC	EQU	0x0a         /*   101: Transmission complete */
EZ80_UARTINSTS_RLS	EQU	0x06         /*   011: Receiver line status */
EZ80_UARTINSTS_RDR	EQU	0x04         /*   010: Receive data ready or trigger level */
EZ80_UARTINSTS_TBE	EQU	0x02         /*   001: Transmisson buffer empty */
EZ80_UARTINSTS_MS	EQU	0x00         /*   000: Modem status */
EZ80_UARTIIR_INTBIT	EQU	0x01         /* Bit 0: Active interrupt source */
EZ80_UARTIIR_CAUSEMASK	EQU	0x0f

/* UART0/1 FCTL register bits *******************************************************/

EZ80_UARTFCTL_TRIG	EQU	0xc0         /* Bits 6-7: UART receive FIFO trigger level */
EZ80_UARTTRIG_1		EQU	0x00         /*   00: Receive FIFO trigger level=1 */
EZ80_UARTTRIG_4		EQU	0x40         /*   01: Receive FIFO trigger level=4 */
EZ80_UARTTRIG_8		EQU	0x80         /*   10: Receive FIFO trigger level=8 */
EZ80_UARTTRIG_14	EQU	0xc0         /*   11: Receive FIFO trigger level=14 */
                                            /* Bit 3-5: Reserved */
EZ80_UARTFCTL_CLRTXF	EQU	0x04         /* Bit 2: Transmit enable */
EZ80_UARTFCTL_CLRRXF	EQU	0x02         /* Bit 1: Receive enable */
EZ80_UARTFCTL_FIFOEN	EQU	0x01         /* Bit 0: Enable receive/transmit FIFOs */

/* UART0/1 LCTL register bits *******************************************************/

EZ80_UARTLCTL_DLAB	EQU	0x80         /* Bit 7: Enable access to baud rate generator */
EZ80_UARTLCTL_SB	EQU	0x40         /* Bit 6: Send break */
EZ80_UARTLCTL_FPE	EQU	0x20         /* Bit 5: Force parity error */
EZ80_UARTLCTL_EPS	EQU	0x10         /* Bit 4: Even parity select */
EZ80_UARTLCTL_PEN	EQU	0x08         /* Bit 3: Parity enable */
EZ80_UARTLCTL_2STOP	EQU	0x04         /* Bit 2: 2 stop bits */
EZ80_UARTLCTL_CHAR	EQU	0x03         /* Bits 0-2: Number of data bits */
EZ80_UARTCHAR_5BITS	EQU	0x00         /*   00: 5 data bits */
EZ80_UARTCHAR_6BITS	EQU	0x01         /*   01: 6 data bits */
EZ80_UARTCHAR_7BITS	EQU	0x02         /*   10: 7 data bits */
EZ80_UARTCHAR_8BITS	EQU	0x03         /*   11: 8 data bits */

EZ80_UARTLCTL_MASK	EQU	0x3f

/* UART0/1 MCTL register bits *******************************************************/

                                            /* Bit 7: Reserved */
EZ80_UARTMCTL_POLARITY	EQU	0x40         /* Bit 6: Invert polarity of RxD and TxD */
EZ80_UARTMCTL_MDM	EQU	0x20         /* Bit 5: Multi-drop mode enable */
EZ80_UARTMCTL_LOOP	EQU	0x10         /* Bit 4: Loopback mode enable */
EZ80_UARTMCTL_OUT2	EQU	0x08         /* Bit 3: (loopback mode only) */
EZ80_UARTMCTL_OUT1	EQU	0x04         /* Bit 2: (loopback mode only) */
EZ80_UARTMCTL_RTS	EQU	0x02         /* Bit 1: Request to send */
EZ80_UARTMCTL_DTR	EQU	0x01         /* Bit 0: Data termnal read */

/* UART0/1 LSR register bits ********************************************************/

EZ80_UARTLSR_ERR	EQU	0x80         /* Bit 7: Error detected in FIFO */
EZ80_UARTLSR_TEMT	EQU	0x40         /* Bit 6: Transmit FIFO empty and idle */
EZ80_UARTLSR_THRE	EQU	0x20         /* Bit 5: Transmit FIFO empty */
EZ80_UARTLSR_BI		EQU	0x10         /* Bit 4: Break on input */
EZ80_UARTLSR_FE		EQU	0x08         /* Bit 3: Framing error */
EZ80_UARTLSR_PE		EQU	0x04         /* Bit 2: Parity error */
EZ80_UARTLSR_OE		EQU	0x02         /* Bit 1: Overrun error */
EZ80_UARTLSR_DR		EQU	0x01         /* Bit 0: Data ready */

/* UART0/1 MSR register bits ********************************************************/

EZ80_UARTMSR_DCD	EQU	0x80         /* Bit 7: Data carrier detect */
EZ80_UARTMSR_RI		EQU	0x40         /* Bit 6: Ring indicator */
EZ80_UARTMSR_DSR	EQU	0x20         /* Bit 5: Data set ready */
EZ80_UARTMSR_CTS	EQU	0x10         /* Bit 4: Clear to send */
EZ80_UARTMSR_DDCD	EQU	0x08         /* Bit 3: Delta on DCD input */
EZ80_UARTMSR_TERI	EQU	0x04         /* Bit 2: Trailing edge change on RI */
EZ80_UARTMSR_DDSR	EQU	0x02         /* Bit 1: Delta on DSR input */
EZ80_UARTMSR_DCTS	EQU	0x01         /* Bit 0: Delta on CTS input */

/* IR Registers  ********************************************************************/

EZ80_IR_CTL		EQU	0xbf

/* I2C Registers  *******************************************************************/

EZ80_I2C_SAR		EQU	0xc8
EZ80_I2C_XSAR		EQU	0xc9
EZ80_I2C_DR		EQU	0xca
EZ80_I2C_CTL		EQU	0xcb
EZ80_I2C_SR		EQU	0xcc
EZ80_I2C_CCR		EQU	0xcd
EZ80_I2C_SRR		EQU	0xce

/* CLK Registers  *******************************************************************/

EZ80_CLK_PPD1		EQU	0xdb
EZ80_CLK_PPD2		EQU	0xdc

/* RTC Registers  *******************************************************************/

EZ80_RTC_SEC		EQU	0xe0
EZ80_RTC_MIN		EQU	0xe1
EZ80_RTC_HRS		EQU	0xe2
EZ80_RTC_DOW		EQU	0xe3
EZ80_RTC_DOM		EQU	0xe4
EZ80_RTC_MON		EQU	0xe5
EZ80_RTC_YR		EQU	0xe6
EZ80_RTC_CEN		EQU	0xe7
EZ80_RTC_ASEC		EQU	0xe8
EZ80_RTC_AMIN		EQU	0xe9
EZ80_RTC_AHRS		EQU	0xea
EZ80_RTC_ADOW		EQU	0xeb
EZ80_RTC_ACTRL		EQU	0xec
EZ80_RTC_CTRL		EQU	0xed

/* CSBMC Registers  *****************************************************************/

EZ80_CS0_BMC		EQU	0xf0
EZ80_CS1_BMC		EQU	0xf1
EZ80_CS2_BMC		EQU	0xf2
EZ80_CS3_BMC		EQU	0xf3

/* FLASH Registers  *****************************************************************/

EZ80_FLASH_KEY		EQU	0xf5
EZ80_FLASH_DATA		EQU	0xf6
EZ80_FLASH_ADDR_U	EQU	0xf7
EZ80_FLASH_CTRL		EQU	0xf8
EZ80_FLASH_FDIV		EQU	0xf9
EZ80_FLASH_PROT		EQU	0xfa
EZ80_FLASH_INTC		EQU	0xfb
EZ80_FLASH_PAGE		EQU	0xfc
EZ80_FLASH_ROW		EQU	0xfd
EZ80_FLASH_COL		EQU	0xfe
EZ80_FLASH_PGCTL	EQU	0xff

