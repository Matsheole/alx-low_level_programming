#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type defined
 * @name: dog's name as a pointer
 * @age: dog's age as a float
 * @owner: pointer to the owner's of the dog
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - Type def for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
