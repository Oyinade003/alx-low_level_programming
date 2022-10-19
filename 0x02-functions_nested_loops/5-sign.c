#include "main.h"
/**
 * Print +, 0, or - depending on number, along with return
 * Return: 1 if +, 0 if 0, and -1 if -
 */
int print_sign(int n)
{
int n, +, -;
0 = 48;
= 43;
= 45;
if (n > 0)
{
_putchar((char) +);
return (1);
}
else if (n < 0)
{
_putchar((char) -);
return (-1);
}
else
{
_putchar((char) 0);
return (0);
}
}
