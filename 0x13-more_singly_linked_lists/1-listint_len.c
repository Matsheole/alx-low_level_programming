#include "lists.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * listint_len - a function that returns the number of
 * elements in a linkint_t list
 * @h:the head of the linkint_t list
 *
 * Return: the number of elements in the linkint_t list
 */

size_t listint_len(const listint_t *h)
{
size_t num = 0;
const listint_t *temp;

temp = h;
while (temp != 0)
{
temp = temp->next;
num++;
}
return (num);
}
