#include "main.h"
#include <stdio.h>

/**
 * _strchr - prototypes
 *
 * @s: pointer
 * @c: char
 *
 * Return: S or NULL
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
