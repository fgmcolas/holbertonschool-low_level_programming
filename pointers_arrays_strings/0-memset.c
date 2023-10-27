#include "main.h"
#include <stdio.h>

/**
 * _memset - prototypes
 *
 * @s: pointer
 * @b: char
 * @n: unsigned int
 *
 * Return: c
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *c = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (c);
}
