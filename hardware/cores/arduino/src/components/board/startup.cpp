/*                                              -*- mode:C; fill-column:100 -*-
  startup.c - The Arduino C-level entry point
  Now: Copyright (C) 2008 Christopher Ladden
  Previous: Copyright (C) 2008 The Regents of the University of New Mexico.  All rights reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301
  USA
*/
#include "wiring.h"
#include "wiring_private.h"

extern "C" void sketchEarlyInits();
void sketchEarlyInits() {
   /* Nothing */
}

extern "C" void sketchLateInits();
void sketchLateInits() {
   /* Nothing */
}

extern "C" void runSketch();
void runSketch() {

  setup();                   /* Finally!  Run user's setup routine! */

  while (1) {                /* Then forever, */
    loop();                  /* then do some of the user's business */
  }

}
