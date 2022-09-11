#include <stdio.h>

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

  SSD1306_DrawLine (0, MAX_X, 4, 4);

  SSD1306_SetPosition (7, 1);
  SSD1306_DrawString ("moj penis");

  SSD1306_DrawLine (0, MAX_X, 18, 18);

  SSD1306_SetPosition (40, 3);
  SSD1306_DrawString ("nghhhh");

  SSD1306_UpdateScreen (addr);

  return 0;
}
