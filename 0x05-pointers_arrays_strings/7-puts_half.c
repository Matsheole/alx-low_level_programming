#include "main.h"
#include <stdio.h>
/**
 * puts_half - a function that prints string in reverse
 * @s: a functions parameter
 *
 * Return: zero 0
 */
void puts_half(char *s)
{
int len, y, i;

y = 0;
while (s[y] != '\0')
{
y++;
}
len = y;
for (i = ((len - 1) / 2) + 1; i < len; i++)
{
_putchar(*(s + i));
}
_putchar('\n');
}
