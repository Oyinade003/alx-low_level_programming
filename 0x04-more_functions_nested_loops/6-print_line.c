#include "main.h"

/**
 * print_line - prints line
 * @n: parameter character
 */

void print_line(int n)
{
    int i, newline;
i = 1;


    while (i <= n)
    {
        _putchar(95);
        i++;
    }
newline = 10;
    _putchar((char) newline);
}
