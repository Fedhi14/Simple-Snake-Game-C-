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
case UP: head.first--; break;
case DOWN: head.first++; break;
case LEFT: head.second--; break;
case RIGHT: head.second++; break;
}

snake.push_front(head);

if (head == fruit) {
score++;
generateFruit();
}else {
snake.pop_back();
}
}

void checkCollision() {
auto head = snake.front();
if (head.first <=0 || head.first >= HEIGHT-1 || head.second >= WIDTH-1) {
 gameOver = true;
}
for (size_t i=1; i < snake.size() ; ++i) {
