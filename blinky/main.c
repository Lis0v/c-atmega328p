#include <avr/io.h>
#include <util/delay.h>

#define LED         PB5
#define LED_PORT    PORTB
#define LED_DDR     DDRB

int main(void){
    setBit(LED_DDR,LED);
    LED_DDR |= (1<<LED);
    
    while(1)
    {
        LED_PORT ^=(1<<LED);
        _delay_ms(10000);
    }
}
