#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - see if the character is alphabetic
 * @c: The character to print
 * main - Entry point
 * Return: Always 0 (Sucess)
 *
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
