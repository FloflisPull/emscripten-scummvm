/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#ifndef HOPKINS_GRAPHICS_H
#define HOPKINS_GRAPHICS_H

#include "common/scummsys.h"
#include "common/endian.h"
#include "common/str.h"

namespace Hopkins {

struct RGB8 {
	byte r;
	byte g;
	byte b;
};

class ObjectManager {
public:
	static byte *CHANGE_OBJET(int objIndex);
	static byte *CAPTURE_OBJET(int objIndex, int mode);

	static int Get_Largeur(const byte *objectData, int objIndex);
	static int Get_Hauteur(const byte *objectData, int objIndex);
	static int sprite_alone(const byte *objectData, byte *sprite, int objIndex);
	static byte *DEL_FICHIER_OBJ();

	static byte *CHARGE_SPRITE(const Common::String &file);
	static int capture_mem_sprite(const byte *objectData, byte *sprite, int objIndex);
	static int AJOUTE_OBJET(int objIndex);
};

class GraphicsManager {
public:
	bool SDL_MODEYES;
	int SDL_ECHELLE;
	int XSCREEN;
	int YSCREEN;
	int WinScan;
	int Winbpp;
	byte SD_PIXELS[514];
	byte *PAL_PIXELS;
	int nbrligne;
	RGB8 cmap[256];
	bool Linear;
public:
	GraphicsManager();

	void SET_MODE(int width, int height);
};

} // End of namespace Hopkins

#endif /* HOPKINS_GRAPHICS_H */
