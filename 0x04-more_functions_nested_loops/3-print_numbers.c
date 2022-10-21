#include "main.h"
/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: numbers
 */
void print_numbers(void)
{
    int num, newline;
newline = 10;

    for (num = 48 ; num <= 57 ; num++)
        _putchar(num);
    _putchar((char) newline);
}
