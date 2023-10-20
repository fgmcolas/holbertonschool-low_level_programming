#include "main.h"
#include <stdio.h>

/**
 * print_traingle - prototype for main.h
 *
 * @size: size of the square
 *
 * Return: 0
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int l;
		int m;
		int b;

		for (l = 0; l < size; l++)
		{
			for (m = 0; m < size - l - 1; m++)
			{
				_putchar(' ');
			}
			for (b = 0; b <= l; b++)
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
