#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

void hideCursor();
void setConsoleColor(int color);
void snakeGame();
void snake();



// main.c
#include "hangman.h"
#include "maze.h"
#include "pacman.h"
#include "snake.h"

int main() {
    int choice;
    while (1) {
        printf("Select a game:\n");
        printf("1. Hangman\n");
        printf("2. Maze\n");
        printf("3. Pacman\n");
        printf("4. Snake\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                hangman();
                break;
            case 2:
                Maze();
                break;
            case 3:
                pacman();
                break;
            case 4:
                snake();
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
