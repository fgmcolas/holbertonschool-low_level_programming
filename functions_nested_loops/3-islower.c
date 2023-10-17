#include <stdio.h>
#include <unistd.h>
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
	if (c <= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
