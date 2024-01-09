#include <stdio.h>
#include <stdint.h>

#define board9x9_easy_1
#include "sudoku_boards.h"

int main(void)
{
    uint8_t i, j;

    printf("Sudoku\n\n");

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            printf("%d ", sudoku_board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            printf("%d ", solution[i][j]);
        }
        printf("\n");
    }
    printf("\n");




    return 0;
}