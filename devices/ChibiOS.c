/**
 * \file ChibiOs.c
 * \brief Device implementation for ChibiOs
 * \author Peter Schuster
 */

/*
	Copyright (c) 2013, Peter Schuster

	All rights reserved.

	Redistribution and use in source and binary forms, with or without
	modification, are permitted provided that the following conditions are met:
		* Redistributions of source code must retain the above copyright
		  notice, this list of conditions and the following disclaimer.
		* Redistributions in binary form must reproduce the above copyright
		  notice, this list of conditions and the following disclaimer in the
		  documentation and/or other materials provided with the distribution.
		* Neither the name of Andy Gock nor the
		  names of its contributors may be used to endorse or promote products
		  derived from this software without specific prior written permission.

	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
	ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
	WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
	DISCLAIMED. IN NO EVENT SHALL ANDY GOCK BE LIABLE FOR ANY
	DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
	(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
	LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
	ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
	(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
	SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
#if !defined(GLCD_USE_PARALLEL)

#include "inc/ChibiOS.h"

void glcd_init(void) {
}

void glcd_spi_write(uint8_t c) {
	GLCD_SELECT();
	spiSend(GLCD_SPI_DRIVER, 1, &c);
	GLCD_DESELECT();
}

void glcd_spi_write_mult(const uint8_t* c, int length) {
	GLCD_SELECT();
	spiSend(GLCD_SPI_DRIVER, length, c);
	GLCD_DESELECT();
}

void glcd_reset(void) {
}

void delay_ms(uint32_t ms) {
	chThdSleepMilliseconds(ms);
}

#else
	#error "Parallel mode is not supported for ChibiOS"
#endif /* !defined(GLCD_USE_PARALLEL) */
