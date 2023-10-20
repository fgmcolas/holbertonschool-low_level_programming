#include "main.h"
#include <stdio.h>

/**
 * print_square - prototype for main.h
 *
 * @size: size of the square
 *
 * Return: 0
 */

void print_square(int size)
{
	if (size > 0)
	{
		int l;
		int m;

		for (l = 0; l < size; l++)
		{
			for (m = 0; m < size; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
