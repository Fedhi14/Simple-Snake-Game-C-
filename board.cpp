// this place is leaved for Misiker Daniel to functions to display the game board using aesthetic borders.
#include "snake.h"
#include <iostream> 
void printBoard(){
    for (int i;i<HEIGHT; ++i) {
     for(int j;j<WIDTH;++j) {
    if (i == 0|| i == HEIGHT-1 || j == 0 || j == WIDTH-1) {
     std :: cout<<"*";
    } else if (std::make_pair(i, j) == snake.front()) {
     std::cout << "o"; 
    } else {
          bool printed = false;
           for (auto segment : snake) {
          if (segment == std::make_pair(i, j)) {
                std::cout << "o";
               printed = true;
   
