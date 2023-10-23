#include "main.h"
#include <stdio.h>

/**
 * puts2 - prototypes
 *
 * @str: pointer
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		if (i < '\0')
		_putchar(str[i]);
	}
	_putchar('\n');
}
