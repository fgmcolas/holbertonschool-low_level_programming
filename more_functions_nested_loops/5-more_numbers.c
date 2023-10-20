#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prototype for main.h
 *
 * Return: 0
 */

void more_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		int n;
	for (n = 0; n <= 14; n++)
	{
		if (n < 10)
		{
		_putchar('0' + n);
		}
		else
		{
			_putchar('0' + n % 10);
		}
	}
	_putchar('\n');
	}
}
