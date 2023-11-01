#include <stdio.h>

/**
 * _atoi - function
 *
 * @s: pointer
 *
 * Return: int
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int result = 0;

	while (!(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;

		if (s[i] == '\0')
		{
			return (0);
		}
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + s[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}

/**
 * main - function
 *
 * @argc: variable
 * @argv: char
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int k = 0;
	char *s;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		s = argv[i];

		for (j = 0; s[j] != 0; j++)
		{
			if (s[j] < '0' || s[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		k = k + _atoi(argv[i]);
	}
	printf("%d\n", k);
	return (0);
}
