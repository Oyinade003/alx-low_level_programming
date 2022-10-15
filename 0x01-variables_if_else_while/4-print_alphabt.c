#include <stdio.h>

/**
  * main - The entry point for the program
  * Return: Always 1 (success)
  */
int main(void)
{
int low, newline;

for (low = 97; low <= 122; low++)
{
if (low !=  113 || low != 101)
putchar((char) low);
}

newline = 10;
putchar((char) newline);

return (0);
}
