#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
 * add - function with a and b, result will be c
 *
 * @a: The character to print with a
 *
 * @b: The character to print with b
 *
 * Return: c
 */

void print_to_98(int n)
{
	int nmb;

	for (nmb = n; nmb <= 98; nmb++)
	{
		printf("%d", nmb);
		if (nmb < 98)
		{
			printf(", ");
		}
	}
	for (nmb = n; nmb >= 98; nmb--)
	{
		printf("%d", nmb);
		if (nmb > 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}
