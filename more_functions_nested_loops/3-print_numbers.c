#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prototype for main.h
 *
 * Return: 0
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
