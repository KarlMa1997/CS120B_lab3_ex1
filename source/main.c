/*	Author: kma023
 *  Partner(s) Name: none
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;

	unsigned char totalBits = 0x00;

	while (1)
	{
		totalBits = (PINA & 0x01) + ((PINA >> 1) & 0x01) + ((PINA >> 2) & 0x01) 
				+ ((PINA >> 3) & 0x01) + ((PINA >> 4) & 0x01) + ((PINA >> 5) & 0x01)
				+ ((PINA >> 6) & 0x01)+ ((PINA >> 7) & 0x01) 
				+ (PINB & 0x01) + ((PINB >> 1) & 0x01) + ((PINB >> 2) & 0x01)
                                + ((PINB >> 3) & 0x01) + ((PINB >> 4) & 0x01) + ((PINB >> 5) & 0x01)
                                + ((PINB >> 6) & 0x01)+ ((PINB >> 7) & 0x01);

		PORTC = totalBits;		
	}
    	return 1;
}
