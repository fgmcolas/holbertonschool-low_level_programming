#include "dog.h"

/**
 * init_dog - Prototypes
 * @d: pointer struct dog
 * @name: pointer char
 * @age: float
 * @owner: pointer char
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
