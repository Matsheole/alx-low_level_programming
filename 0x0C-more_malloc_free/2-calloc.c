#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory wiht a constant byte
 * @s: MEMORY AREA TO BE FILLED
 * @b: char to copy
 * @n: number of times to copy the second string (b)
 *
 * Return: pointer to the memory area of s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

/**
 * _calloc - Allocate memory to an array
 * @nmemb: numbers of elelment of the array
 * @size: size of each element
 *
 * Return:Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(size * nmemb);
if (ptr == NULL)
{
return (NULL);
}
_memset(ptr, 0, nmemb * size);
return (ptr);
}
