#include "main.h"
/**
 * _puts - a function that printsa string
 * @str: a function parameter
 *
 * Return: return 0
 */
void _puts(char *str)
{
int x;

x = 0;
while (str[x] != '\0')
{
_putchar(str[x]);
x++;
}
_putchar('\n');
}
