#include "main.h"

/**
 * more_numbers - prints more numbers
 */

void more_numbers(void)
{
    int i, c, newline;
newline = 10;

    i = 0;

    while (i < 10)
{
for (c = 0; c <= 14; c++)
        {
            if (c >= 10)
            {
                _putchar((c / 10) + 48);
            }
            _putchar((c % 10) + 48);
        }

        _putchar((char) newline);

        i++;
    }
}
