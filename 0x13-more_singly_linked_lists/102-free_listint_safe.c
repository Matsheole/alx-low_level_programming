#include "lists.h"
#include <stdlib.h>

/**
 *  free_listint_safe - Frees a listint_t list
 * @h: Pointer to the first node on the list
 *
 * Return: numbers of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
int diff;
listint_t *temp;

if (!h || !*h)
return (0);
while (*h)
{
diff = *h - (*h)->next;
if (diff > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
len++;
}
else
{
free(*h);
*h = NULL;
len++;
break;
}
}
*h = NULL;
return (len);
}
