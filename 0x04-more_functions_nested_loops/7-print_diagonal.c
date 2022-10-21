#include "main.h"

/**
 * print_diagonal - print slash
 * @n: params
 */

void print_diagonal(int n)
{
int i = 0;
int j, newline;
newline = 10;

if (n > 0)
{
for (; i < n; i++)
{
for (j = 0; j < i; j++)
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
