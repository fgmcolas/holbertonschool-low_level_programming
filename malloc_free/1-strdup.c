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
	int i = 0;
	int strl;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	
	strl = strlen(str)
	p = (char *) malloc(sizeof(char) * (strl + 1));

	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
