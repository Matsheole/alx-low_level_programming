#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Write a function that deletes the
 * node at index index of a listint_t linked list.
 * @head: the pointer to the header.
 * @index:  is the index of the node that should be deleted.
 * Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head, *current;
unsigned int i = 0;

if (*head == NULL)
{
return (-1);
}
if (index == 0)
{
*head =  (*head)->next;
free(temp);
return (1);
}
while (i < index - 1)
{
if (!temp || !(temp->next))
return (-1);
temp = temp->next;
i++;
}
current = temp->next;
temp->next = current->next;
free(current);
return (1);
}
