#include "main.h"

/**
 * get_bit - Returns the value of a bit
 * @n: The number of the bit
 * @index: The index of the bit
 * Return: The value of the bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
