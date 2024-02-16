
#include "title_card.h"

#include <conio.h>
#include <peekpoke.h>
#include "listofcharacters.c"
//#link "listofcharacters.h"

#include "assets.h"

#define DIR_NONE    0
#define DIR_LEFT    PAD_LEFT
#define DIR_RIGHT    PAD_RIGHT
#define DIR_UP      PAD_UP
#define DIR_DOWN    PAD_DOWN

int tmp; // need at least 1 variable

int main() {
  clrscr();
  bgcolor(COLOR_BLACK);
  textcolor(COLOR_CYAN);
  cputs("\r\n*** PLEASE WAIT! ***");
  while (1) ;
  return 0;
}