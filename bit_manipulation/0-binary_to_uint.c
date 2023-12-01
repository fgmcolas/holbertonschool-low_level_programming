#include "main.h"

/**
 * binary_to_uint - Prints the binary of a number
 * @b: The number to be converted
 * Return: The result or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			result = (result << 1) + (*b - '0');
			b++;
		}
		else
			return (0);
	}

	return (result);
}
