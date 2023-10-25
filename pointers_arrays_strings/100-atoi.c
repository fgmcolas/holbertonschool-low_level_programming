#include "main.h"
#include <stdio.h>
#include <limits.h>
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
	int numstart = 0;
	
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
			if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
			{
				if (sign == 1)
				{
					return INT_MAX;
				}

				else
				{
					return INT_MIN;
				}
			}
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
