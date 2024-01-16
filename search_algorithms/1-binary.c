#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array of integers
  * @array: A pointer to the first element of the array to search
  * @size: The number of elements in the array
  * @value: The value to search for
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the first index
  */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (!array)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
			for (mid = left; mid < right; mid++)
				printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
