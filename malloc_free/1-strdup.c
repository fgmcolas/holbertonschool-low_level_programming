#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Prototypes
 *
 * @str: char
 *
 * Return: NULL or p
 */

char *_strdup(char *str)
{
	char *p;
	int i;	

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}

	p = (char *) malloc(sizeof(char) * (i + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
