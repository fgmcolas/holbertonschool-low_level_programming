#include <stdio.h>
#include "main.h"

/**
 * factorial - prototypes
 *
 * @n: number
 *
 * Return: 0 or -1
 */

int factorial(int n)
{
	int i;
	int f = 1;

	if (n < 0)
	{
		return (-1);
	}
	for (i = 1; i <= n; i++)
	{
		f = f * i;
	}
	return (f);
}
