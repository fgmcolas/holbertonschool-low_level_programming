#include "main.h"
#include <stdio.h>

/**
 * _memcpy- prototypes
 *
 * @dest: char
 * @src: char
 * @n: unsigned int
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *c = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (c);
}
