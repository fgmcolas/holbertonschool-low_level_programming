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
/**	char *d = dest;
	char *s = src;

	while (*s != '\0')
	{
		*d = *s;
		d++;
		s++;
	}

	return (dest);
}*/
	int i = 0;

	while (src[i] != '\0')
	{
	src[i] = dest[i];
	i++;
	}
/*dest = '\0';*/

return (dest);
}
