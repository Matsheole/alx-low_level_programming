#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees a listint_t list.
 * @head: the head of the listint_t
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
