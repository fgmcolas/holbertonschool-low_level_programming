#include "main.h"
#include <stdlib.h>

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
	int i = 0;

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

	for (i = 0; str[i]; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
