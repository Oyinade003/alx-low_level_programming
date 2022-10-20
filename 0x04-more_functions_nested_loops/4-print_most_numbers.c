#include "main.h"
/**
 *Description: Printing numbers from 0 to 9 except 2 and 4.
 *Main
 *return: null
 */
void print_most_numbers(void)
{
int newline, c;
newline = 10;
for (c = 48; c <= 58; c++)
{
if (c != 2 && c != 4)
{
_putchar(c);
}
}
_putchar((char) newline);
}
