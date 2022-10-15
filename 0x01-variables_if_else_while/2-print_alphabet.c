#include <stdio.h>

/**
  * main - The entry point for the program
  * Return: The exit code
  */
int main(void)
{
int low,newline;
newline = 10;

for (low = 97; low <= 122; low++)

putchar((char) low);

putchar((char) newline);

return (0);
}
