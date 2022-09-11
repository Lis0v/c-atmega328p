#define F_CPU 16000000UL

#include <stdio.h>
#include <util/delay.h>

#include </usr/include/ssd1306/ssd1306.h>
#include </usr/include/ssd1306/font.h>
#include </usr/include/ssd1306/twi.h>

#include "/usr/include/ssd1306/ssd1306.c"
#include "/usr/include/ssd1306/font.c"
#include "/usr/include/ssd1306/twi.c"

#define str     SSD1306_DrawString
#define pos     SSD1306_SetPosition
#define clr     SSD1306_ClearScreen
#define line    SSD1306_DrawLine

int main(void)
{
    uint8_t addr = SSD1306_ADDRESS;
    clr();
    SSD1306_Init (addr);
    
    line(0,127,0,0);
    pos(0,1);
    str("\"The Godfather");
    pos(0,2);
    str("insists upon itself.");
    pos(0,4);
    str("It *insists* upon"); 
    pos(0,5);
    str("itself.\"");
    line(0,127,54,54);

    SSD1306_UpdateScreen(addr);

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
