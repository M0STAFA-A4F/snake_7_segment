#include <avr/io.h>
#include <avr/delay.h>
#include "STD_TYPES.h"

#define ones	0x02
#define tens	0x01


int main(void)
{
	u8 sequence1[9] = {0x01,0x02,0x04,0x08,0x10,0x20,0x01,0x02,0x40};
	u8 sequence2[9] = {0x40,0x20,0x01,0x02,0x04,0x08,0x10,0x20,0x01};

	DDRB = 0xff;
	DDRA = 0xff;

	PORTA = 0x03;

	while(1)
	{
		PORTA = ones;
		for(u8 i=0; i<9; i++)
		{
			PORTB = sequence1[i];
			_delay_ms(1000);
		}

		PORTA = tens;
		for(u8 i=0; i<9; i++)
		{
			PORTB = sequence2[i];
			_delay_ms(1000);
		}
	}

	return 0;
}
