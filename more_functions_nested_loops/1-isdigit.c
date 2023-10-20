#include "main.h"
#include <stdio.h>

/**
 * _isdigit - prototype for main.h
 *
 * @c: Character
 *
 * Return: 1 if c is a digit; esle 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
