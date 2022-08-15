#include "lists.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list.
 * @head: the head of the list.
 * @n: the data in the list.
 *
 * Return: the address of the new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode, *temp;

newnode = malloc(sizeof(listint_t));
if (!newnode)
{
return (NULL);
}
temp = *head;
newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
*head = newnode;
return (newnode);
}
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newnode;
return (newnode);
}
