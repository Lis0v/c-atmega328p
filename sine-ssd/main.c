#define F_CPU 16000000UL

#include <stdio.h>
#include <math.h>
#include <util/delay.h>

#include </usr/include/ssd1306/ssd1306.h>
#include </usr/include/ssd1306/font.h>
#include </usr/include/ssd1306/twi.h>

#include "/usr/include/ssd1306/ssd1306.c"
#include "/usr/include/ssd1306/font.c"
#include "/usr/include/ssd1306/twi.c"

int main(void)
{
    uint8_t addr = SSD1306_ADDRESS;
    SSD1306_ClearScreen();
    SSD1306_Init (addr);
    double y;
    double x = 0;

        while(1){

            y=8*sin(x/2);
            
            x = x + 0.2;
            SSD1306_DrawPixel(x, y+32);
            SSD1306_UpdateScreen (addr);

            if(x>127){
                x = 0;
            SSD1306_ClearScreen();
            }
        }

    return 0;
}

/* UKLAD
 * ard  -   ssd
 * ------------
 * GND  -   GND
 * 5V   -   VDD
 * A4   -   SCK
 * A5   -   SDA
*/
