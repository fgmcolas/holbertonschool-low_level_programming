#include "variadic_functions.h"

/**
 * sum_them_all - function
 * @n: number of int
 * Return: the sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int u;
	int s = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (u = 0; u < n; u++)
		s = s + va_arg(list, int);
	va_end(list);
	return (s);
}
