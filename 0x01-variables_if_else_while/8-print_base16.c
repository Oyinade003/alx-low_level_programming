#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
int num, newline, letter;
newline = 10;

for (num = 0; num < 10; num++)
putchar((char) num);

for (letter = 97; letter <= 102; letter++)
putchar((char) letter);

putchar((char) newline);

return (0);
}
