#include "main.h"
#include <stdio.h>

/**
 * swap_int - prototypes
 *
 * @a: pointer1
 * @b: pointer2
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
