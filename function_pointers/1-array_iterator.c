#include "function_pointers.h"

/**
 * array_iterator - Prototypes
 * @array : array
 * @size : size of array
 * @action : pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t t;

	if (array == 0 || size == 0 || array == 0)
		return;
	for (t = 0 ; t < size; t++)
		action(array[t]);
}
