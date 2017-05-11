/*
    This program is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation; either version 2
    of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA  02110-1301, USA.
    
 */

#include <stdio.h>
#include <stdlib.h>
#include "Patcher.h"

int main(int argc, char **argv) {
  if (3 != argc) {
    printf("Usage:\n\t %s <p|u> <ISO or BIN to patch>\n\n\tp\tApply ESR patch\n\tu\tRemove ESR patch\n", argv[0]);
    exit(EXIT_FAILURE);
  }
  CPatcher m_patcher;
  int cmd = *argv[1];
  int rv;
  switch (cmd) {
      case 'u': printf("Attempting to remove ESR patch... ");
        rv = m_patcher.doUnPatch(argv[2]);
        break;
      case 'p':
      default:
        printf("Attempting to apply ESR patch... ");
        rv = m_patcher.doPatch(argv[2]);
    }
  switch (rv) {
      case ESR_FILE_OK:
        puts("OK!");
        exit(EXIT_SUCCESS);
      case ESR_FILE_ALREADY_PATCHED:
        puts("ERROR!\nFile is already patched.");
        exit(EXIT_FAILURE);
      case ESR_FILE_NOT_PATCHED:
        puts("ERROR!\nFile not patched.");
        exit(EXIT_FAILURE);
      case ESR_FILE_CANNOT_OPEN:
        puts("ERROR!\nFile couldn't be opened.");
        exit(EXIT_FAILURE);
      case ESR_FILE_NO_UDF_DESCRIPTOR:
        puts("ERROR!\nFile does not have UDF descriptor.");
        exit(EXIT_FAILURE);
      default:
        puts("ERROR!\nUnknown error.");
        exit(EXIT_FAILURE);
    }
}
