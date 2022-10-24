#include "main.h"

/**
 * swap_int - function with two int type pointer argument
 * @a: 1st argument of int type
 * @b: 2nd argument of int type
 *
 * Description: Using a pointer declared to change value of a and b
 * Return: void
 */
void swap_int(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
