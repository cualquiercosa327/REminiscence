
/*
 * REminiscence - Flashback interpreter
 * Copyright (C) 2005-2015 Gregory Montoir (cyx@users.sourceforge.net)
 */

#include "scaler.h"
#include "util.h"

static void point1x(uint16_t *dst, int dstPitch, const uint16_t *src, int srcPitch, int w, int h) {
	dstPitch >>= 1;
	while (h--) {
		memcpy(dst, src, w * 2);
		dst += dstPitch;
		src += srcPitch;
	}
}

const Scaler _scalers[] = {
	{ "point1x", &point1x, 1 },
	{ 0, 0, 0 }
};

