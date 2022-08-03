#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - This funtion prints name
 * @name: name to be printed
 * @f: pointer to the printing funtion
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
{
return;
}
f(name);
}
