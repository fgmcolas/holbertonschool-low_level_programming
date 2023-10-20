#include "main.h"
#include <stdio.h>

/**
 * _issuper - prototype for main.h
 *
 * @c: Character
 *
 * Return: 1 if uppercase; 0 if lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
