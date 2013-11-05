/*
 * ChibiOS_Config.h
 *
 *  Created on: 31.10.2013
 *      Author: Peter Schuster
 */

#ifndef CHIBIOS_CONFIG_H_
#define CHIBIOS_CONFIG_H_

#include "ch.h"

#define GLCD_SPI_DRIVER	&SPID1

#define GLCD_CS_PORT 	GPIOA
#define GLCD_CS_PAD		GPIOA_PIN4

#define GLCD_A0_PORT 	GPIOD
#define GLCD_A0_PAD		GPIOD_PIN0

#endif /* CHIBIOS_CONFIG_H_ */
