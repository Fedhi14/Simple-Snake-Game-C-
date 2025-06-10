// for input.cpp 
#include "snake.h"
#include <conio.h>
void getInput() {
  if (_kbhit () ) {
char ch = _getch();
switch (ch) { 
case 'w' : if (direction !=  DOWN) direction = UP; break ;


