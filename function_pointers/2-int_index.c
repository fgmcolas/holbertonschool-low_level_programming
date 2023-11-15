#include "function_pointers.h"

/**
 * int_index - Prototypes
 * @array : array
 * @size: size of array
 * @cmp: pointer
 * Return: -1 or i
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0 || cmp == 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
