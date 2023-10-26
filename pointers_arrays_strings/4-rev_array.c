#include "main.h"
#include <stdio.h>

/**
 * reverse_array - prototypes
 *
 * @a: pointer
 * @n: number
 */

void reverse_array(int *a, int n)
{
	int t;
	int i;

	for (i = n - 1; i >= n / 2; i--)
	{
		t = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = t;
	}
}
