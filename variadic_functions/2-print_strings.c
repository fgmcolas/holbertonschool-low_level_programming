#include "variadic_functions.h"

/**
 * print_strings - function
 * @separator : pointer
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int u;
	char *s;

	va_start(list, n);

	for (u = 0; u < n; u++)
	{
		s = va_arg(list, char *);

		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil");

		if (separator != NULL && u < n - 1)
		printf("%s", separator);
	}

	va_end(list);
	printf("\n");
}
