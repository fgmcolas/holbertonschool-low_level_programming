#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion_second - 2nd function
 *
 * @n: number
 * @i: result
 *
 * Return: i or -1
 */

int _sqrt_recursion_second(int n, int i)
{

	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion_second(n, i + 1));
	}
}

/**
 *  * _sqrt_recursion - 2nd function
 *
 * @n: number
 *
 * Return: n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_second(n, 1));
}
