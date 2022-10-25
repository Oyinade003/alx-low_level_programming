#include <stdio.h>
#include "main.h"
/**
 * print_rev - This function prints a string in reverse order
 * @s: pointer parameter
 * Return value
 */

void print_rev(char *s)
{
int i = 0;
int j;
int newline = 10;

while (s[i] != 0)
{
i++;
}
for (j = i - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar((char) newline);
}
