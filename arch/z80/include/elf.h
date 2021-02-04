/****************************************************************************
 * arch/xtensa/include/elf.h
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
 * under the License.
 *
 ****************************************************************************/

#ifndef __ARCH_Z80_INCLUDE_ELF_H
#define __ARCH_Z80_INCLUDE_ELF_H

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Machine architecture flags */

#define EF_Z80_MACH_Z80         0x01
#define EF_Z80_MACH_Z180        0x02
#define EF_Z80_MACH_R800        0x03
#define EF_Z80_MACH_EZ80_Z80    0x04
#define EF_Z80_MACH_EZ80_ADL    0x84
#define EF_Z80_MACH_GBZ80       0x05
#define EF_Z80_MACH_Z80N        0x06
#define EF_Z80_MACH_MSK         0xff

/* Relocation codes */

#define R_Z80_NONE              0
#define R_Z80_8                 1
#define R_Z80_8_DIS             2
#define R_Z80_8_PCREL           3
#define R_Z80_16                4
#define R_Z80_24                5
#define R_Z80_32                6
#define R_Z80_BYTE0             7
#define R_Z80_BYTE1             8
#define R_Z80_BYTE2             9
#define R_Z80_BYTE3             10
#define R_Z80_WORD0             11
#define R_Z80_WORD1             12
#define R_Z80_16_BE             13

#endif
