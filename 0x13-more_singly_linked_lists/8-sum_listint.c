#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - a function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: the pointer to the first node.
 *
 * Return: the sum of all the data
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp;

if (head == NULL)
{
return (0);
}
temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
