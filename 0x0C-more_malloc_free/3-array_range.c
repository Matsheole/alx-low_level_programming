#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: the min value
 * @max: the max value
 *
 * Return: the pointer to the array
 */

int *array_range(int min, int max)
{
int *ptr;
int i, size;

if (min > max)
{
return (NULL);
}
size = (max - min) + 1;
ptr = malloc(size *sizeof(int));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; min <= max; i++)
{
ptr[i] = min;
min++;
}
return (ptr);
}
