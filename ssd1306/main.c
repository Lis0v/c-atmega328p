#include <stdio.h>
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
    SSD1306_Init (addr);
    SSD1306_ClearScreen ();

    int x;

        for(int y=0;y<64;y++){
            y = x + 1;
            SSD1306_DrawPixel(x, y);
            SSD1306_UpdateScreen (addr);
            _delay_ms(1000);
        }
    return 0;
}
