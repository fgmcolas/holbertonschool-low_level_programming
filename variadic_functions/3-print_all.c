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
 * print_string - function
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
	int j;
	char *sep = "";

	print_t functions[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == *functions[j].specifier)
			{
				printf("%s", sep);
				functions[j].printer(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
