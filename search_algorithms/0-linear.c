#include "search_algos.h"

/**
 * linear_search - Search for a value in an array of integers
 * @array: The pointer to the 1st element of the array to search
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: If value is not present in array or if array is NULL, -1
 *		else, the first index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
