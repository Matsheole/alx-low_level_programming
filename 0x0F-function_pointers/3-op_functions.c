#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add numbers
 * @a: first number
 * @b: second number
 *
 * Return: ...
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - subtract numbers
 * @a: first number
 * @b: second number
 *
 * Return: the result
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the result
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the result
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - get the remainder
 * @a: first number
 * @b: second number
 *
 *Return: the result
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}

