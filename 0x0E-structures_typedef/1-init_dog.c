#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A function that initializes a variable of type struct dog
 * @d: Input
 * @name: The name of the dog to initialize
 * @age: The age of the dog to initialize
 * @owner: The owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
