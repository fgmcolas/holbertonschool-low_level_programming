#include "main.h"
#include <stdio.h>

/**
 * _strcmp - prototypes
 *
 * @s1: pointer
 * @s2: pointer
 *
 * Return: s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
