#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
int num, newline;
newline = 10;

for (num = 0; num < 10; num++)
putchar((num % 10) + 0);

putchar((newline % 10) + 0);

return (0);
}
