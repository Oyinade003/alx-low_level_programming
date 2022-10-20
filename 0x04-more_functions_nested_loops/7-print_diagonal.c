#include "main.h"

/**
 * print_line - prints diagonal line
 * @n: parameter character
 */

void print_diagonal(int n)
{
int i, newline;
i = 1;


    while (i <= n)
    {
        _putchar(92);
        i++;
    }
newline = 10;
_putchar((char) newline);
}
