#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prototype from main.h
 *
 * hours - between 0 and 23
 *
 * minutes - between 0 and 59
 *
 */

void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours <= 23; hours++)
	{
	for (minutes = 0; minutes <= 59; minutes++)
	{
	_putchar('0' + hours / 10);
	_putchar('0' + hours % 10);
	_putchar(':');
	_putchar('0' + minutes / 10);
	_putchar('0' + minutes % 10);
	_putchar('\n');
	}
	}
}
