#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_listint_safe - Write a function that prints
 * a listint_t linked list.
 * @head: the head of the listint_t
 *
 * Return: the number of nod
 */

size_t print_listint_safe(const listint_t *head)
{
size_t num = 0;
long int diff;

while (head)
{
diff = head - head->next;
num++;
printf("[%p] %d\n", (void *)head, head->n);
if (diff > 0)
head = head->next;
else
{
printf("-> [%p] %d\n",
(void *)head->next, head->next->n);
break;
}
}
return (num);
}
