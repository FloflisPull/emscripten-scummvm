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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#ifndef TSAGE_RINGWORLD2_SPEAKERS_H
#define TSAGE_RINGWORLD2_SPEAKERS_H

#include "common/scummsys.h"
#include "tsage/converse.h"
#include "tsage/events.h"
#include "tsage/core.h"
#include "tsage/scenes.h"
#include "tsage/globals.h"
#include "tsage/ringworld2/ringworld2_logic.h"

namespace TsAGE {

namespace Ringworld2 {

using namespace TsAGE;

class VisualSpeaker : public Speaker {
public:
	SceneActor _object1;
	SceneObject *_object2;
	int _fieldF6, _fieldF8;
	int _displayMode;
	int _soundId;
	int _delayAmount;
	bool _removeObject;
	int _frameNumber;
	int _numFrames;
private:
	void setFrame(int numFrames);
public:
	VisualSpeaker();

	virtual Common::String getClassName() { return "VisualSpeaker"; }
	virtual void synchronize(Serializer &s);
	virtual void remove();
	virtual void setText(const Common::String &msg);
	virtual void proc15() {}
	virtual void proc16();
};

class SpeakerMiranda300 : public VisualSpeaker {
public:
	SpeakerMiranda300();

	virtual Common::String getClassName() { return "SpeakerMiranda300"; }
	virtual void proc15();
};

class SpeakerSeeker300 : public VisualSpeaker {
public:
	SpeakerSeeker300();

	virtual Common::String getClassName() { return "SpeakerSeeker300"; }
	virtual void proc15();
};

class SpeakerSeekerL : public VisualSpeaker {
public:
	SpeakerSeekerL();

	virtual Common::String getClassName() { return "SpeakerSeekerL"; }
};

class SpeakerQuinnL : public VisualSpeaker {
public:
	SpeakerQuinnL();

	virtual Common::String getClassName() { return "SpeakerQuinnL"; }
};

class SpeakerQuinn300 : public VisualSpeaker {
public:
	SpeakerQuinn300();

	virtual Common::String getClassName() { return "SpeakerQuinn300"; }
	virtual void proc15();
};

class SpeakerTeal300 : public VisualSpeaker {
public:
	SpeakerTeal300();

	virtual Common::String getClassName() { return "SpeakerTeal300"; }
	virtual void proc15();
};

class SpeakerSoldier300 : public VisualSpeaker {
public:
	SpeakerSoldier300();

	virtual Common::String getClassName() { return "SpeakerSoldier300"; }
	virtual void proc15();
};

class SpeakerQuinn2350 : public VisualSpeaker {
public:
	SpeakerQuinn2350();

	virtual Common::String getClassName() { return "SpeakerQuinn2350"; }
};

class SpeakerPharisha2350 : public VisualSpeaker {
public:
	SpeakerPharisha2350();

	virtual Common::String getClassName() { return "SpeakerPharisha2350"; }
};

} // End of namespace Ringworld2
} // End of namespace TsAGE

#endif