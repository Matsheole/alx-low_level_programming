#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_listint - a function that prints all the
 * elements of a listint_t list.
 * @h: an object of listin_s
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t num = 0;
const listint_t *temp;

temp = h;
while (temp != 0)
{
printf("%d\n", temp->n);
temp = temp->next;
num++;
}
return (num);
}
