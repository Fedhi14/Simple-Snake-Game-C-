// This place is reserved for Metsnanat Awraris
#ifndef SNAKE_H
#define SNAKE_H

#include <deque>
#include <utility>

const int WIDTH = 40;
const int HEIGHT = 20;

enum Direction { UP, DOWN, LEFT, RIGHT };

extern std::deque<std::pair<int, int>> snake;
extern int direction;
extern int score;
extern bool gameOver;
extern std::pair<int, int> fruit;

// Game Logic
void initializeGame();
void moveSnake();
void checkCollision();
void generateFruit();

// UI
void printBoard();
void clearScreen();
void getInput();
bool playAgainPrompt();
void showWelcome();

#endif
