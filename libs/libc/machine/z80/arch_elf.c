/****************************************************************************
 * libs/libc/machine/z80/arch_elf.c
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

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <debug.h>

#include <arch/elf.h>
#include <nuttx/elf.h>

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/****************************************************************************
 * Private Data
 ****************************************************************************/

/****************************************************************************
 * Private Functions
 ****************************************************************************/

static bool is_l32r(FAR const unsigned char *p)
{
  return (p[0] & 0xf) == 1;
}

/****************************************************************************
 * Public Functions
 ****************************************************************************/

/****************************************************************************
 * Name: up_checkarch
 *
 * Description:
 *   Given the ELF header in 'hdr', verify that the ELF file is appropriate
 *   for the current, configured architecture.  Every architecture that uses
 *   the ELF loader must provide this function.
 *
 * Input Parameters:
 *   hdr - The ELF header read from the ELF file.
 *
 * Returned Value:
 *   True if the architecture supports this ELF file.
 *
 ****************************************************************************/

bool up_checkarch(FAR const Elf32_Ehdr *ehdr)
{
  /* Make sure it's a Z80 executable */

  if (ehdr->e_machine != EM_Z80)
    {
      berr("ERROR: Not for Z80: e_machine=%04x\n", ehdr->e_machine);
      return false;
    }

  /* Make sure that 32-bit objects are supported */

  if (ehdr->e_ident[EI_CLASS] != ELFCLASS32)
    {
      berr("ERROR: Need 32-bit objects: e_ident[EI_CLASS]=%02x\n",
           ehdr->e_ident[EI_CLASS]);
      return false;
    }

  /* Verify endian-ness */

#ifdef CONFIG_ENDIAN_BIG
#error not implemented
  if (ehdr->e_ident[EI_DATA] != ELFDATA2MSB)
#else
  if (ehdr->e_ident[EI_DATA] != ELFDATA2LSB)
#endif
    {
      berr("ERROR: Wrong endian-ness: e_ident[EI_DATA]=%02x\n",
           ehdr->e_ident[EI_DATA]);
      return false;
    }

  /* Verify the flags match the chip */
#ifdef CONFIG_ARCH_CHIP_Z80
  if (ehdr->e_flags != EF_Z80_MACH_Z80)
#elif CONFIG_ARCH_CHIP_Z180
  if (ehdr->e_flags != EF_Z80_MACH_Z180)
#elif CONFIG_ARCH_CHIP_EZ80
  if (ehdr->e_flags != EF_Z80_MACH_EZ80_ADL)
#else
#error Chip architecture is not supported
#endif
    {
      berr("ERROR: Wrong machine architecture: e_flags=%02x\n",
           ehdr->e_flags);
      return false;
    }

  return true;
}

/****************************************************************************
 * Name: up_relocate and up_relocateadd
 *
 * Description:
 *   Perform on architecture-specific ELF relocation.  Every architecture
 *   that uses the ELF loader must provide this function.
 *
 * Input Parameters:
 *   rel - The relocation type
 *   sym - The ELF symbol structure containing the fully resolved value.
 *         There are a few relocation types for a few architectures that do
 *         not require symbol information.  For those, this value will be
 *         NULL.  Implementations of these functions must be able to handle
 *         that case.
 *   addr - The address that requires the relocation.
 *
 * Returned Value:
 *   Zero (OK) if the relocation was successful.  Otherwise, a negated errno
 *   value indicating the cause of the relocation failure.
 *
 ****************************************************************************/

int up_relocate(FAR const Elf32_Rel *rel, FAR const Elf32_Sym *sym,
                uintptr_t addr)
{
  unsigned int relotype;

  /* All relocations except NONE depend upon having valid symbol
   * information.
   */

  relotype = ELF32_R_TYPE(rel->r_info);
  if (sym == NULL && relotype != R_Z80_NONE)
    {
      return -EINVAL;
    }

  /* Handle the relocation by relocation type */

  switch (relotype)
    {
    case R_Z80_NONE:
      {
        /* No relocation */
      }
      break;

    default:
      berr("ERROR: Unsupported relocation: %u\n", relotype);
      return -EINVAL;
    }

  return OK;
}

int up_relocateadd(FAR const Elf32_Rela *rel, FAR const Elf32_Sym *sym,
                   uintptr_t addr)
{
  unsigned int relotype;
  unsigned char *p;
  uint32_t value;

  /* All relocations except NONE depend upon having valid symbol
   * information.
   */

  relotype = ELF32_R_TYPE(rel->r_info);
  if (sym == NULL)
    {
      if (relotype != R_Z80_NONE)
        {
          return -EINVAL;
        }
    }
  else
    {
      value = sym->st_value + rel->r_addend;
    }

  /* Handle the relocation by relocation type */

  switch (relotype)
    {
    case R_Z80_NONE:
      break;

    case R_Z80_24:
      (*(FAR uint24_t *)addr) += value;
      break;

    /* While there are many more relocation types for Z80 ELF objects,
     * binutils does not support position independent executables or
     * shared libraries on this architecture. I don't know how else to
     * get relocation entries into an executable...
     */

    default:
      berr("ERROR: RELA relocation %u not supported\n", relotype);
      return -EINVAL;
    }

  return OK;
}
