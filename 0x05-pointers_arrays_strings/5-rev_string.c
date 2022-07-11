#include "main.h"
/**
 * rev_string - a function that prints string in reverse
 * @s: a functions parameter
 *
 * Return: zero 0
 */
void rev_string(char *s)
{
int len, x, y, i;

y = 0;
while (s[y] != '\0')
{
y++;
}
len = y;
for (x = 0; x < len / 2; x++)
{
i = *(s + x);
*(s + x) = *(s + len - x - 1);
*(s + len - x - 1) = i;
}
}
