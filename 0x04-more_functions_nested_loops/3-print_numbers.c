#include "main.h"
/**
 *Description: To print numbers from 0 to 9 followed by a new line.
 *
 *Return value: Null
 */
void print_numbers(void)
{
int newline, c;
newline = 10;
for (c = 48; c <= 57; c++)
    {
        _putchar(c);
    }
_putchar((char) newline);
}
