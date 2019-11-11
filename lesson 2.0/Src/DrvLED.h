/*
 * DrvLED.h
 *
 *  Created on: Nov 11, 2019
 *      Author: Violetta
 */

#ifndef DRVLED_H_
#define DRVLED_H_

typedef enum
{
	LED_BLUE = LD6,
	LED_RED = LD5,
	LED_ORANGE = LD3,
	LED_GREEN = LD4

}led_t;

void drvLeds_ON(leds_t LEDsColour);
void drvLeds_OFF(leds_t LEDsColour);

#endif /* DRVLED_H_ */
