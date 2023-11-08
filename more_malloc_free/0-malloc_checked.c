#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Pototypes
 *
 * @b: int
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	char *pointer;

	pointer = (char *) malloc(sizeof(char) * b);

	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
