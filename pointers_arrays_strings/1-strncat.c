#include "main.h"
#include <stdio.h>

/**
 * _strncat - prototypes
 *
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while (dest[j] != '\0')
		j++;

	while (src[i] != '\0' && i < n)
	{
		dest[i + j] = src[i];
		i++;
	}
	return (dest);
}
