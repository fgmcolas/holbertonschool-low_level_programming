#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - see if the character is lower
 * @n: The character to print
 * main - Entry point
 * Return: 1, -1, or 0 (Sucess)
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
