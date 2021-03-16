/****************************************************************************
 * arch/z80/include/syscall.h
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

/* This file should never be included directly but, rather, only indirectly
 * through include/syscall.h or include/sys/sycall.h
 */

#ifndef __ARCH_Z80_INCLUDE_SYSCALL_H
#define __ARCH_Z80_INCLUDE_SYSCALL_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/****************************************************************************
 * Public Types
 ****************************************************************************/

/****************************************************************************
 * Inline functions
 ****************************************************************************/

#ifndef __ASSEMBLY__

#ifdef __clang__

static inline uintptr_t sys_call0(unsigned int nbr)
{
  return 0;
}

static inline uintptr_t sys_call1(unsigned int nbr, uintptr_t param1)
{
  return 0;
}

static inline uintptr_t sys_call2(unsigned int nbr, uintptr_t param1,
                                  uintptr_t param2)
{
  return 0;
}

static inline uintptr_t sys_call3(unsigned int nbr, uintptr_t param1,
                                  uintptr_t param2, uintptr_t param3)
{
  return 0;
}

static inline uintptr_t sys_call4(unsigned int nbr, uintptr_t param1,
                                  uintptr_t param2, uintptr_t param3,
                                  uintptr_t param4)
{
  return 0;
}

static inline uintptr_t sys_call5(unsigned int nbr, uintptr_t param1,
                                  uintptr_t param2, uintptr_t param3,
                                  uintptr_t param4, uintptr_t param5)
{
  return 0;
}

static inline uintptr_t sys_call6(unsigned int nbr, uintptr_t param1,
                                  uintptr_t param2, uintptr_t param3,
                                  uintptr_t param4, uintptr_t param5,
                                  uintptr_t param6)
{
  return 0;
}

#else

#error "The syscall service is not supported using ZDS-II"

#endif

#endif /* __ASSEMBLY__ */

/****************************************************************************
 * Public Data
 ****************************************************************************/

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

#endif /* __ARCH_Z80_INCLUDE_SYSCALL_H */
