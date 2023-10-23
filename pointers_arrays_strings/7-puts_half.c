#include "main.h"
#include <stdio.h>

/**
 * puts_half - prototypes
 *
 * @str: pointer
 */

void puts_half(char *str)
{
	int i;
	int m;

	i = 0;

	while (str[i] != '\0')
		i++;

	m = i / 2;

	if (i % 2 == 1)
		m++;

	while (m < i)
	{
	_putchar(str[m]);
	m++;
	}
	_putchar('\n');
}
