#include "main.h"

/**
 *A program that prints the alphabet in lowercase case followed by a new line
 */

void print_alphabet(void);
{
int low, newline;
newline = 10;

for (low = 97; low <= 122; low++)
{
_putchar ((char) low);
_putchar ((char) newline);
}

return (0);
}
