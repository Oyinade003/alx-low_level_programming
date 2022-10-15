#include <stdio.h>

/**
  * main - The entry point for the program
  * Return: The exit code
  */
int main(void)
{
int low, newline;
int high;
newline = 10;

for (low = 97; low <= 122; low++)

putchar((char) low);

for (high = 65; high <= 90; high++)

putchar((char) high);


putchar((char) newline);

return (0);
}
