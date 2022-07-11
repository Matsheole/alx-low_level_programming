#include "main.h"
/**
 * print_rev - a function that prints string in reverse
 * @s: a functions parameter
 *
 * Return: zero 0
 */
void print_rev(char *s)
{
int len, x, y;

y = 0;
while (s[y] != '\0')
{
y++;
}
len = y;
for (x = len - 1; x >= 0; x--)
{
_putchar(s[x]);
}
_putchar('\n');
}
