#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
 * print_to_98 - function with a and b, result will be c
 *
 * @n: The number
 *
 * Return: c
 */

void print_to_98(int n)
{
	int nmb;

	if (n < 98)
	{
		for (nmb = n; nmb <= 98; nmb++)
		{
			printf("%d", nmb);
			if (nmb < 98)
			{
				printf(", ");
			}
		}
	}
	else if (n > 98)
	{
		for (nmb = n; nmb >= 98; nmb--)
		{
			printf("%d", nmb);
			if (nmb > 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
