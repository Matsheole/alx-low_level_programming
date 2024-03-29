#include "main.h"
#include <stdlib.
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: the fist string
 * @s2: the second string
 * @n: the number of characters of the second string that will
 * be added to the first string
 *
 * Return: the first string with the second string joind together
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;
if (n < len1)
{
s = malloc(sizeof(char) * (len1 + n + 1));
}
else
{
s  = malloc(sizeof(char) * (len1 + len2 + 1));
}
if (!s)
return (NULL);
while (i < len1)
{
s[i] = s1[i];
i++;
}
while (n < len2 && i < (len1 + n))
s[i++] = s2[j++];
while (n >= len2 && i < (len1 + len2))
s[i++] = s2[j++];
s[i] = '\0';
return (s);
}
