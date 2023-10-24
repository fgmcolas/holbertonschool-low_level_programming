#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - prototypes
 *
 * @dest: pointer
 * @src: pointer
 */

char *_strcpy(char *dest, char *src)
{
	char *d = dest;
	char *s = src;

	while (*s != '\0')
	{
		*d = *s;
		d++;
		s++;
	}

	return (dest);
}
