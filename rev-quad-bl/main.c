#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

#define PB0_SET     PORTB |=(1<<PB0)
#define PB0_RESET   PORTB &= ~(1<<PB0)
#define PB0_TOGGLE  PORTB ^= (1<<PB0)

int main(void){
    DDRB = 255; // caly port B na wyjscie

    for(;;){
       PB0_TOGGLE;

        for(uint8_t i=5;i>1;i--){
            PORTB ^= (1<<i);
            _delay_ms(1000);
        }
    }
}

/* Uklad komponentow:
 * 13 LED RES GND
 * 12 LED RES GND
 * 11 LED RES GND
 * 10 LED RES GND
 */
