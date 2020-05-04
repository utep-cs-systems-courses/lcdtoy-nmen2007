/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

/** Initializes everything, clears the screen, draws "hello" and a square */
int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_BLUE);

  drawString5x7(15,20, "Hello", COLOR_GREEN, COLOR_RED);
  drawString8x12(20,40, "What's up", COLOR_BLACK, COLOR_GREEN);

  // fillRectangle(30,30, 60, 60, COLOR_ORANGE);
  
}
