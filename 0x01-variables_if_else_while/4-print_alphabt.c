#include <stdio.h>

/**
 * main - Entry point
 * author: sammy
 * Return: Always 0 (Success)
 */
int main(void)
{
int oyin;
int newline;

for (oyin = 97; oyin <= 122; oyin++)
{
if (oyin != 113 && oyin != 101)
putchar((char) oyin);
}
newline = 10;
putchar((char) newline);
return (0);
}
