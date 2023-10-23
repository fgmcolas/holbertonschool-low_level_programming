#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - prototypes
 *
 * @s: string
 *
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
