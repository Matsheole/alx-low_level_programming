#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees the linked list
 * @head: list_t list to be freed
 *
 * Return: void
 */

void free_list(list_t *head)
{
list_t *temp;

while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
