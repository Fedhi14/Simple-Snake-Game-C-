// this place is reserved for Yabets Mulu 
#include "snake.h"
#include <deque>
#include <cstdlib>

std::deque<std::pair<int, int>> snake;
int direction = RIGHT;
int score = 0;
bool gameOver = false;
std::pair<int, int> fruit;
