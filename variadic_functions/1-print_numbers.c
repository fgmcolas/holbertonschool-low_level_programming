#include "variadic_functions.h"

/**
 * print_numbers - function
 * @separator : pointer
 * @n: number of int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int u;

	va_start(list, n);

	for (u = 0; u < n; u++)
	{
		printf("%d", va_arg(list, int));

		if (separator != NULL && u < n - 1)
		printf("%s", separator);
	}

	va_end(list);
	printf("\n");
}
