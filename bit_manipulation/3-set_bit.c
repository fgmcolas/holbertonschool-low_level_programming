#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1
 * @n: Pointer to the number
 * @index: The index of the bit to set
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1 << index);
	return (1);
}
