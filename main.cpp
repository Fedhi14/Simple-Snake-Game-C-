// this place is reserved for Yadesa Mulugeta to Develop the main game loop to control the flow of the game.
// ------------------ utils.cpp ------------------
#include "snake.h"
#include <iostream>
#include <thread>
#include <chrono>

int main() {
    initializeGame();
    
    while (!gameOver) {
        clearScreen();
        printBoard();
        getInput();
        moveSnake();
        checkCollision();
        std::this_thread::sleep_for(std::chrono::milliseconds(150));
    }

    std::cout << "\nGame Over!\n";
    if (playAgainPrompt()) {
        initializeGame();
        main(); 
    }

    return 0;
}
