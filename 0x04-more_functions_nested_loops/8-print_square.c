#include "main.h"
/**
 * print_diagonal -draws a diagonal line on the terminal
 * @n: the number of times that the special character must be print
 *
 * Return: a diagonal
 */
void print_diagonal(int n)
{
    int a, b, newline;
newline = 10;

    if (n > 0)
    {
        for (a = 0 ; a < n ; a++)
        {
            for (b = 0 ; b < a ; b++)
            {
                _putchar(32);
            }
            _putchar(92);
            _putchar((char) newline);
        }
    }
    else
    {
        _putchar((char) newline);
    }
}
