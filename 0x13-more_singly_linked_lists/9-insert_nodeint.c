#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 * @head: the pointer to the header.
 * @idx: index where the new node should be added
 * @n: the data in the list
 *
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp = *head, *newnode;
unsigned int i;

newnode = malloc(sizeof(listint_t));
if (!head || !newnode)
{
return (NULL);
}
newnode->n = n;
newnode->next = NULL;
if (idx == 0)
{
newnode->next = *head;
*head = newnode;
return (newnode);
}
for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
newnode->next = temp->next;
temp->next = newnode;
return (newnode);
}
else
{
temp = temp->next;
}
}
return (NULL);
}
