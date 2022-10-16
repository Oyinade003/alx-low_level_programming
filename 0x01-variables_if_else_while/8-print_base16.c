#include <stdio.h>

/**
 * main - Entry point
 * autor: sammy
 * Return: Always 0 (Success)
 */
int main(void)
{
int low, high, newline;
newline = 10;

for (low = 48; low < 58; low++)
putchar((char) low);
for (high = 97; high <= 102; high++)
putchar((char) high);
putchar((char) newline);
return (0);
}
