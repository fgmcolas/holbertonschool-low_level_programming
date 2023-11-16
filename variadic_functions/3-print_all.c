#include "variadic_functions.h"

/**
 * print_char - function
 * @list: va_list
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - function
 * @list: va_list
 */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - function
 * @list: va_list
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_strings - function
 * @list: va_list
 */

void print_string(va_list list)
{
	char *s;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}

/**
 * print_all - function
 * @format: string of char
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%s", sep), print_char(args);
		if (format[i] == 'i')
			printf("%s", sep), print_int(args);
		if (format[i] == 'f')
			printf("%s", sep), print_float(args);
		if (format[i] == 's')
			printf("%s", sep), print_string(args);

		sep = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
