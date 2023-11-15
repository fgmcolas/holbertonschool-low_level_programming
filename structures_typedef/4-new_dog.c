#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Prototypes
 * @name: pointer char
 * @age: float
 * @owner: pointer char
 * Return: pointer or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	dog->name = strdup(name);
	dog->owner = strdup(owner);
	if (dog->name == 0)
	{
		free(dog->name);
		return (NULL);
	}
	if (dog->owner == 0)
	{
		free(dog->owner);
		return (NULL);
	}
	if (dog == 0)
	{
		free(dog->name);
		free(dog->owner);
		return (NULL);
	}
	dog->age = age;
	return (dog);
}
