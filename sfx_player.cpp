
/*
 * REminiscence - Flashback interpreter
 * Copyright (C) 2005-2015 Gregory Montoir (cyx@users.sourceforge.net)
 */

#include "mixer.h"
#include "sfx_player.h"
#include "util.h"

SfxPlayer::SfxPlayer(Mixer *mixer)
	: _mod(0), _playing(false), _mix(mixer) {
}

void SfxPlayer::play(uint8_t num) {

}

void SfxPlayer::stop() {

}

void SfxPlayer::playSample(int channel, const uint8_t *sampleData, uint16_t period) {

}

void SfxPlayer::handleTick() {
}

void SfxPlayer::mixSamples(int8_t *buf, int samplesLen) {
}

bool SfxPlayer::mix(int8_t *buf, int len) {
	return 0;
}

bool SfxPlayer::mixCallback(void *param, int16_t *samples, int len) {
	return 0;
}
