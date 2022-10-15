#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
int letter, newline;
newline = 10;

for (letter = 122; letter >= 97; letter--)
putchar((char) letter);

putchar((char) newline);

return (0);
}
