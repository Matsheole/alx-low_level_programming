#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - Initializes the dog variable of type struct
 *@d: Pointer to the struct dog initializes
 *@name: name of the dog
 *@age: age of the dog
 *@owner: The owner of the dog
 *
 *Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
d = malloc(sizeof(struct dog));
}
d->name = name;
d->age = age;
d->owner = owner;
}
