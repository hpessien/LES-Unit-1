#define F_CPU 12000000L

#include <avr/io.h>
#include <util/delay.h>

int main(void){


	DDRB = 0xFF;
	DDRD = 0xFF;
	PORTD = 0x00;
	PORTB = 0x00;

	for(;;){
		int i = 2;
		while(i < 8)
		{
		PORTD |= (0x01 << i); //PortB is output 
		_delay_ms(400);
		i++;
		}

		i = 0;
		while(i < 6)
		{
		PORTB |= (0x01 << i); //PortB is output
		_delay_ms(400);
		i++;
		}

		i = 2;
		while(i < 8)
		{
		PORTD ^= (0x01 << i); //PortB is output
		_delay_ms(400);
		i++;
		}

		i = 0;
		while(i < 6)
		{
		PORTB ^= (0x01 << i); //PortB is output
		_delay_ms(400);
		i++;
		}

	
}
}