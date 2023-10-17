#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - see if the character is lower
 * @c: The character to print
 * main - Entry point
 * Return: Always 0 (Sucess)
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
