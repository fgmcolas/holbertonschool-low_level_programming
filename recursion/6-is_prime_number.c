#include <stdio.h>
#include "main.h"

/**
 * is_prime_number_second - second function
 *
 * @n: number
 * @i: result
 *
 * Return: 0 or 1
 */

int is_prime_number_second(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_number_second(n, i + 1));
}

/**
 * is_prime_number - prototypes
 *
 * @n: number
 *
 * Return: 0 or n
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_number_second(n, 2));
}
