#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: pointer parameter
 */

void _puts(char *str)
{
    int i = 0;
    int newline = 10;

while (str[i] != 0)
    {
        _putchar(str[i]);
        i++;
    }

    _putchar(newline);
}
