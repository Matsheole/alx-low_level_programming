#include "lists.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a listint_t list.
 * @head: the head of the list.
 * @n: the data in the list.
 *
 * Return: the address of the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;

newnode = malloc(sizeof(listint_t));
if (!newnode)
{
return (NULL);
}
newnode->n = n;
newnode->next = *head;
*head = newnode;
return (newnode);
}
