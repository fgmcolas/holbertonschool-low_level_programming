#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - prototypes
 *
 * @dest: pointer
 * @src: pointer
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
