#include "main.h"
#include <stdio.h>

/**
 * _atoi - prototypes
 *
 * @s: pointer
 *
 * Return: sign*result
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
			i++;
		}

		else if (s[i] == '+')
		{
			i++;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
		result = result * 10 + (s[i] - '0');
		i++;
		}
	
		else
		{
			break;
		}
	}
	result *= sign;
	return (result);
}
