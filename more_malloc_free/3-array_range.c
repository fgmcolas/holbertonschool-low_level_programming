#include <stdio.h>
#include "main.h"

/**
 * array_range - Pototypes
 *
 * @min: int
 * @max: int
 *
 * Return: NULL or a
 */

int *array_range(int min, int max)
{
	int d;
	int i;
	int *a;

	if (min > max)
	{
		return (NULL);
	}

	d = max - min;
	a = (int *) malloc(sizeof(int) * (d + 1));

	if (a == (NULL))
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
