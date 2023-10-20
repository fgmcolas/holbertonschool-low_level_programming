#include "main.h"
#include <stdio.h>

/**
 * print_line - prototype for main.h
 *
 * @n: number of _ printed
 *
 * Return: 0
 */

void print_line(int n)
{
	if (n > 0)
	{
		int l;

		for (l = 0; l < n; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
