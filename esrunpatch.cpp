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

    ---
    Copyright (C) 2008, Tatsh
 */

#include <iostream>
#include "Patcher.h"

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <ISO or BIN to unpatch>" << std::endl;
    return 1;
  }
  
  bool ok;
  CPatcher m_patcher;
  
  switch (m_patcher.doUnPatch(argv[1])) {
    case ESR_FILE_OK:
      ok = true;
      break;

    case ESR_FILE_NOT_PATCHED:
      std::cout << argv[1] << " is not patched." << std::endl;
      ok = false;
      break;

    case ESR_FILE_CANNOT_OPEN:
      std::cout << "Could not open " << argv[1] << "." << std::endl;
      ok = false;
      break;

    case ESR_FILE_NO_UDF_DESCRIPTOR:
      std::cout << "No UDF descriptor found in " << argv[1] << "." << std::endl;
      ok = false;
      break;

    default:
      std::cout << "Unknown error during unpatching procedure." << std::endl;
      ok = false;
      break;
  }
  
  if (!ok)
    return 1;
  else
    return 0;
}
