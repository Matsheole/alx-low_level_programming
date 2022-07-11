#include <stdio.h>
#include "main.h"
/**
 * print_array - a function that prints all elementsof an arrray
 * @a: a is the first parameter of the function
 * @n: n is the second parameterof te function
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i == n - 1)
{
printf("%d", a[i]);
}
else
{
printf("%d, ", a[i]);
}
}
putchar(10);
}
