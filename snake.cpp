// this place is reserved for Yabets Mulu 
#include "snake.h"
#include <deque>
#include <cstdlib>

std::deque<std::pair<int, int>> snake;
int direction = RIGHT;
int score = 0;
bool gameOver = false;
std::pair<int, int> fruit;

void initializeGame() {
  snake.clear();
snake.push_back({Height / 2, WIDTH / 2});
direction = RIGHT;
  score = 0;
gameOver = false;
generateFruit();
}

void moveSnake() {
  auto head = snake.fron();
switch (direction) {
