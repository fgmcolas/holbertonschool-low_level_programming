#include "main.h"
#include <stdio.h>

/**
 * _strcat - prototypes
 *
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (dest[j] != '\0')
		j++;

	while (src[i] != '\0')
	{
		dest[i + j] = src[i];
		i++;
	}
	return (dest);
}
