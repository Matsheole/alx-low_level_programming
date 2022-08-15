#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list.
 * @head: the pointer to the head of the listint_t.
 * @index: the node the it will return
 *
 * Return: the node that has the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp;
unsigned int i = 0;

temp = head;
if (index == 0)
{
return (temp);
}
while (temp && i < index)
{
temp = temp->next;
i++;
}
if (index > i)
{
return (NULL);
}

return (temp);
}
