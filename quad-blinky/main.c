#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void){
    DDRB = 255; // caly port B na wyjscie

    for(;;){
    PORTB ^= (1<<PB0);

        for(uint8_t i=2;i<6;i++){
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
