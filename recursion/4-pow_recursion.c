#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - prototypes
 *
 * @x: number
 * @y: power of
 *
 * Return: j or -1
 */

int _pow_recursion(int x, int y)
{
	int i;
	int j = 1;

	if (y < 0)
	{
		return (-1);
	}
	for (i = 0; i < y; i++)
	{
		j = j * x;
	}
	return (j);
}
