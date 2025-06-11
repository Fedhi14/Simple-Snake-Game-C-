// for input.cpp 
#include "snake.h"
#include <conio.h>
void getInput() {
  if (_kbhit () ) {
char ch = _getch();
switch (ch) { 
 
case 's' : if (direction != UP) direction = DOWN; break ;
case 'a' : if ( direction != RIGHT) direction = LEFT; break;
case 'd' : if (direction != LEFT) direction = RIGHT; break;
     }
   }
}

