#include <stdio.h>

/**
 * main 
 * A script to print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be separated by a space and a comma.
 * Return: 0
 */
int main(void)
{
int count = 2;
long int i = 1, j = 2;
long int k;

printf("%lu, ", i);
while (count <= 50)
{
if (count == 50)
{
printf("%lu\n", j);
}
else
{
printf("%lu, ", j);
}

k = j;
j += i;
i = k;
count++;
}

return (0);
}
