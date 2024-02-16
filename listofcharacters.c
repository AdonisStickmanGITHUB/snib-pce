#include <conio.h>
#include <peekpoke.h>

int casts() {
  clrscr();
  bgcolor(COLOR_BLACK);
  textcolor(COLOR_RED);
  cputs("\r\n*********************** WELCOME! ***********************");
  cputs("\r\n ");
  textcolor(COLOR_WHITE);
  cputs("\r\nWhat you're playing is a TURBOGRAFX-16 version of SEVEN");
  cputs("\r\nNIGHTS INSIDE BARRACA'S. (No vore shit...) I don't even");
  cputs("\r\nknow on how that's even possible to begin with, but");
  cputs("\r\nhere it is I guess.");
  cputs("\r\n");
  cputs("\r\n");
  cputs("\r\n");
  
  //list of characters can be set here!
  textcolor(COLOR_CYAN);
  cputs("\r\nLIST OF CHARACTERS!");
  cputs("\r\n");
  cputs("\r\n");
  
  //Name for ROBO #1
  textcolor(COLOR_PURPLE);
  cputs("\r\nROBOT #1 - THE LEADER");
  
  //Name for ROBO #2
  textcolor(COLOR_BLUE);
  cputs("\r\nROBOT #2 - THE CREEPER");
 
  //Name for ROBO #3
  textcolor(COLOR_RED);
  cputs("\r\nROBOT #3 - THE CRAWLER");
 
  //Name for ROBO #4
  textcolor(COLOR_GREEN);
  cputs("\r\nROBOT #4 - THE RUNNER");
  cputs("\r\n");

  //Name for ROBO #5
  textcolor(COLOR_WHITE);
  cputs("\r\nand last but not least...");
  cputs("\r\n");
  textcolor(COLOR_YELLOW);
  cputs("\r\nROBOT #5 - THE GOLDEN");
  
  cputs("\r\n");
  cputs("\r\n");
  cputs("\r\n");
  cputs("\r\n");
  textcolor(COLOR_CYAN);
  cputs("\r\n******************** PRESS START! ********************");
  while (1) ;
  return 0;
}



