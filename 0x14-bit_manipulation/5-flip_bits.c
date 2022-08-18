#include "main.h"

/**
 * flip_bits - a function that counts the numbers of bits to change
 * @n: First number
 * @m: second number
 *
 * Return: numbers of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int excl = n ^ m;

for (i = 63; i >= 0; i--)
{
current = excl >> i;
if (current & 1)
count++;
}
return (count);
}
