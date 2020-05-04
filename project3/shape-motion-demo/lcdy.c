/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

/** Initializes everything, clears the screen, draws "hello" and a square */
//int
//main()
//{
//  configureClocks();
//lcd_init();
  u_char width = screenWidth, height = screenHeight;
  u_char c,r;
// u_char colLeft, colRight, size;
//clearScreen(COLOR_BLUE);

  // for (c=0, r=0;  c<15 && r < 15; c++, r++){

  // drawPixel(c,c,COLOR_BLACK);
  // drawPixel(0, c, COLOR_BLACK);
    //    drawPixel(r, 15, COLOR_BLACK);
  //}
  //  for(r = 0, c = 30; r < 30 && c >= 0; r++,c--){
  // drawPixel(r,c,COLOR_BLACK);
  // }
  // for(r = 30; r< 80; r++){
  // drawPixel(r,0,COLOR_BLACK);
  // }
  //for(r=0, c=80; r < 30 && c <110; r++, c++){
  // drawPixel(c,r,COLOR_BLACK);
  // }
  // for( r = 0; r<110; r++){
  // drawPixel(r,30,COLOR_BLACK);
  //}

  //traignle at 15
  // for(r = 0; r <=5;r++){
  // colLeft = 15 - r;
  // colRight = 15;
  // for ( c = colLeft; c <= colRight; c++)
  //  drawPixel(c,r,COLOR_RED);
  //}

  void diamond(){

    //clearScreen(COLOR_BLACK);
    
      for(r = 0; r <= 10; r++){
	for(c = 0; c <= 10-r; c++){
	  drawPixel(50+r,50+c,COLOR_ORANGE);
	  drawPixel(50+r,50-c,COLOR_ORANGE);
	  drawPixel(50-r,50+c,COLOR_ORANGE);
	  drawPixel(50-r,50-c,COLOR_ORANGE);
	}
      }
  }

void star(){

  r = 20;

  for (c=10; c<30; c++)
    drawPixel(r, c, COLOR_ORANGE);

  for (c=10; c<30; c++)
    drawPixel(c, r, COLOR_ORANGE);

  for (c=10; c<30; c++)
    drawPixel(c, c, COLOR_ORANGE);

  r = 30;

  for (c=10; c<30; c++)
    drawPixel(r--, c, COLOR_ORANGE);
}

void joke(){
  drawString5x7(10,20, "Why dont you hear", COLOR_GREEN, COLOR_RED);
  drawString5x7(10,30, "about pizza Jokes?", COLOR_GREEN, COLOR_RED);
  drawString8x12(10,40, "They are too", COLOR_GREEN, COLOR_RED);
  drawString8x12(30,50, "cheesy", COLOR_GREEN, COLOR_RED);


}

//}
