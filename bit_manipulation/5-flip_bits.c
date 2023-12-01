#include "main.h"

/**
 * flip_bits - Returns the number of bits
 * @n: The first number
 * @m: The second number
 * Return: The count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}
