#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prototype for main.h
 *
 * @n: number of _ printed
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int l;
		int m;

		for (l = 0; l < n; l++)
		{
			for (m = 0; m < l; m++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
