#include <stdio.h>
#include "main.h"

/**
 * times_table - multiplication table
 *
 * unit - the unit who will be multiplicated
 *
 * multi - the multiplicator
 *
 * result - the result of the multiplication
 */

void times_table(void)
{
	int unit;
	int multi;
	int result;

	for (unit = 0; unit < 10; unit++)
	{
		for (multi = 0; multi < 10; multi++)
		{
			result = unit * multi;

				if (multi < 9)
				{
					if (result < 10)
					{
						_putchar(' ');
					}
					else
					{
						_putchar('0' + result / 10);
					}
					_putchar('0' + result % 10);
					_putchar(',');
					_putchar(' ');
				}				
				else
				if (result <= 10)
					{
						_putchar(' ');
						_putchar('0' + result % 10);
						_putchar('\n');

					}
				else
				{
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
					_putchar('\n');
				}
		}
	}
}
