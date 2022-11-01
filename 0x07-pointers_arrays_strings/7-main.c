#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char board[8][8] = {
        {114, 107, 98, 113, 107, 98, 107, 114},
        {112, 112, 112, 112, 112, 112, 112, 112},
        {32, 32, 32, 32, 32, 32, 32, 32},
        {32, 32, 32, 32, 32, 32, 32, 32},
        {32, 32, 32, 32, 32, 32, 32, 32},
        {32, 32, 32, 32, 32, 32, 32, 32},
        {80, 80, 80, 80, 80, 80, 80, 80},
        {82, 75, 66, 81, 75, 66, 75, 82},
    };
    print_chessboard(board);
    return (0);
}