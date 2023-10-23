#include "main.h"
#include <stdio.h>

/**
 * print_rev - prototypes
 *
 * @s: pointer
 */

void print_rev(char *s)
{
	int c = 0;
	int i;

	while (s[c] != '\0')
	{
		c++;
	}

	i = c - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
