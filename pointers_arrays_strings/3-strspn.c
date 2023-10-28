#include "main.h"
#include <stdio.h>

/**
 * _strspn - prototypes
 *
 * @s: pointer
 * @accept : char
 *
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i;
	int j;

	while (*s != '\0')
	{
		i = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				i = 1;
			break;
			}
		}

		if (i)
		{
			count++;
		}
		else
		{
			break;
		}
	s++;
	}
	return (count);
}
