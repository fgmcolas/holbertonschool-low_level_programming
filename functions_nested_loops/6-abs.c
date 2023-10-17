#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
 * _abs - see if the character is alphabetic
 * @j: The argument for abs
 * main - Entry point
 * Return: Always 0 (Sucess)
 *
 */

int _abs(int j)
{
	if (j < 0)
	{
		return (-j);
	}
	else
	{
		return (j);
	}
}
