#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int num, newline, comma, space;
newline = 10;
comma = 44;
space = 32;

for (num = 48; num < 58; num++)
{
putchar((char) num);
if (num != 57)
{
putchar((char) comma);
putchar((char) space);
}
}
putchar((char) newline);
return (0);
}
