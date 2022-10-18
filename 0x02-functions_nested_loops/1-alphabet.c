#include "main.h"

/**
 * print_alphabet - entry point
 * Return: 0
 */

void print_alphabet(void)
{
    char c;
            int newline = 10;
             
            for (c = 97; c <= 122; c++)
    {
        _putchar(c);
        
           }
             _putchar((char) newline);
}
