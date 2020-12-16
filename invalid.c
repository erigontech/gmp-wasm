/* __gmp_invalid_operation -- invalid floating point operation.

   THE FUNCTIONS IN THIS FILE ARE FOR INTERNAL USE ONLY.  THEY'RE ALMOST
   CERTAIN TO BE SUBJECT TO INCOMPATIBLE CHANGES OR DISAPPEAR COMPLETELY IN
   FUTURE GNU MP RELEASES.

Copyright 2003 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of either:

  * the GNU Lesser General Public License as published by the Free
    Software Foundation; either version 3 of the License, or (at your
    option) any later version.

or

  * the GNU General Public License as published by the Free Software
    Foundation; either version 2 of the License, or (at your option) any
    later version.

or both in parallel, as here.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received copies of the GNU General Public License and the
GNU Lesser General Public License along with the GNU MP Library.  If not,
see https://www.gnu.org/licenses/.  */

#include "config.h"

#include <stdlib.h>

#include "gmp-impl.h"


/* __gmp_invalid_operation is for an invalid floating point operation, like
   mpz_set_d on a NaN or Inf.  It's done as a subroutine to minimize code in
   places raising an exception.

   Deliberately divide by zero, which triggers an exception on most systems.
   On those where it doesn't, for example power and powerpc, use abort instead. */
void
__gmp_invalid_operation (void)
{
  __gmp_junk = 10 / __gmp_0;
  abort ();
}
