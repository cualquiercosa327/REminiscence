
/*
 * REminiscence - Flashback interpreter
 * Copyright (C) 2005-2015 Gregory Montoir (cyx@users.sourceforge.net)
 */

#include "file.h"
#include "mixer.h"
#include "mod_player.h"
#include "util.h"

ModPlayer::ModPlayer(Mixer *mixer, FileSystem *fs)
	: _playing(false), _mix(mixer), _fs(fs) {
}

ModPlayer::~ModPlayer() {
	delete _impl;
}

void ModPlayer::play(int num) {
}

void ModPlayer::stop() {

}

bool ModPlayer::mixCallback(void *param, int16_t *buf, int len) {
}
