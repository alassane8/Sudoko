#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <unistd.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void choice_saving_game(unsigned char ** mat, unsigned char ** mat_bis, char *pseudo){

    //Variables deifinition
    int choice;
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Clean page
    system("cls");

    // Display files matrices

    sudokuascii();

    gotoligcol(20, 70);
    SetConsoleTextAttribute(hConsole, 6);
    printf("Where do you want to save the current game ?");
    SetConsoleTextAttribute(hConsole, 15);
    gotoligcol(21, 70);
    printf("1. Over Game 1");
    gotoligcol(22, 70);
    printf("2. Over Game 2");
    gotoligcol(23, 70);
    printf("3. Over Game 3");
    gotoligcol(24, 70);
    printf("4. Main menu");
    gotoligcol(44, 70);
    printf("Copyright 2024 Sudoku Alassane Wade");
    gotoligcol(25, 70);
    fflush(stdin);
    scanf("%d", &choice);

    while (choice != 4)
    {
        gotoligcol(25, 140);
        SetConsoleTextAttribute(hConsole, 12);
        printf("Error.");
        SetConsoleTextAttribute(hConsole, 15);
        gotoligcol(25, 70);
        printf("  ");
        gotoligcol(25, 70);
        fflush(stdin);
        scanf("%d", &choice);
    }
    system("cls");
    menu(mat, mat_bis, pseudo);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////