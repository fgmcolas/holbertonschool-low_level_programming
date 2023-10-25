#include "main.h"
#include <stdio.h>

/**
 * _strncpy - prototypes
 *
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
