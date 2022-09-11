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
    double y = 0;

        for(double x=0;x<32;x++){
            SSD1306_Init (addr);

            y = sin(x); //funkcja

            SSD1306_DrawPixel(round(x), round(y+8));
            SSD1306_UpdateScreen (addr);
        }
    return 0;
}
