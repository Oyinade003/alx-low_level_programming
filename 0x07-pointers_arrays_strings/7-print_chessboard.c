#include "main.h"
/**
* print_chessboard - print chessboard given set 2D array
* @a: 2D array
*/
void print_chessboard(char (*a)[8])
{
int row;
int column;
int newline = 10;

for (row = 0; row < 8; row++)
{
for (column = 0; column < 8; column++)
_putchar(a[row][column]);
_putchar((char) newline);
}
}
