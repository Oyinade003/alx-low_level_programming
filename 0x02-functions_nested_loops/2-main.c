#include "main.h"

/**
 * print_alphabet - entry point
 * Return: 0
 */
void print_alphabet_x10(void);
{
char c;
int newline, counter;
newline = 10;

for (counter = 1; counter < 10; counter++) {
for (c = 97; c <= 122; c++)
{
_putchar(c);
}
}
_putchar((char) newline);
}
