#include "main.h"
/**
 * puts2 - a function that prints a string
 * @str: a function parameter
 *
 * Return: return 0
 */
void puts2(char *str)
{
int x;

x = 0;
while (str[x] != '\0')
{
if (x % 2 == 0)
{
_putchar(str[x]);
}
x++;
}
_putchar('\n');
}
