// this place is reserved for Yordanos Mesay
// Create the function called clearScreen() used to clear the screen in every iteration
#include "snake.h"
#include <cstdlib>
#include <iostream>
void clearScreen() {
    #ifdef _WIN32
    std:: system("cls");
    #else
    std:: system("clear");
    #endif
}

bool playAgainPrompt() {
    char choice;
    std::cout << "Play Again? (y/n): ";
    std::cin >> choice;
    return choice == 'y' || choice == 'Y';
}

void showWelcome() {
    std::cout << "\n*************** Welcome to Snake Game ***************\n";
    std::cout << "Use W A S D to move. Eat o and avoid hitting yourself or borders.\n";
    std::cout << "****************************************************\n\n";
}










// the is is for Demanesh Gelu
// create the function called playAgainPrompt()
