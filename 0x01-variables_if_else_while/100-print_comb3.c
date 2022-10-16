#include <stdio.h>
/**
 * main - program compilation begins from main
 * Description: Program to print all possible combinations of numbers
 with no two numbers same in pairing
 * author: sammykingx
 * Return: 0 means success
 */
int main(void)
{
 int first, second, newline, comma, space;
newline = 10;
comma = 44;
space = 32;

for (first = 48; first <=57; first++)
{
for (second = 49; second <= 57; second++)
 {
 if ( first != second && second > first)
 {
                                putchar((char) first);
                                putchar((char) second);
                                putchar((char) comma);
putchar((char) space);
}
}
}
putchar((char) newline);
return (0);
}
