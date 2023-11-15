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
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(strlen(name) +1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(strlen(owner) +1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = strcopy(dog->name, name);
	dog->age = age;
	dog->owner = strcopy(dog->owner, owner);
	return (dog);
}
