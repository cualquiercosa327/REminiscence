
/*
 * REminiscence - Flashback interpreter
 * Copyright (C) 2005-2015 Gregory Montoir (cyx@users.sourceforge.net)
 */

#include "mixer.h"
#include "systemstub.h"
#include "util.h"

Mixer::Mixer(FileSystem *fs, SystemStub *stub)
	: _stub(stub), _musicType(MT_NONE), _mod(this, fs), _ogg(this, fs), _sfx(this) {
}

void Mixer::init() {
}

void Mixer::free() {
}

void Mixer::setPremixHook(PremixHook premixHook, void *userData) {
}

void Mixer::play(const MixerChunk *mc, uint16_t freq, uint8_t volume) {
}

bool Mixer::isPlaying(const MixerChunk *mc) const {
	return false;
}

uint32_t Mixer::getSampleRate() const {
	return 0;
}

void Mixer::stopAll() {
}

static bool isMusicSfx(int num) {
	return (num >= 68 && num <= 75);
}

void Mixer::playMusic(int num) {

}

void Mixer::stopMusic() {

}

void Mixer::mix(int16_t *out, int len) {
	
}

void Mixer::mixCallback(void *param, int16_t *buf, int len) {
}
