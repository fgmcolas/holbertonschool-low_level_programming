#include "main.h"
#include <stdlib.h>

/**
 * create_array - Prototypes
 *
 * @size: unsigned int
 * @c: char
 *
 * Return: NULL or array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *) malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}