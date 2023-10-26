#include "main.h"
#include <stdio.h>

/**
 * leet - prototypes
 *
 * @s: pointer
 *
 * Return: s
 */

char *leet(char *s)
{
	int i;
	int y;
	char c[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char d[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[i] == c[y])
			{
				s[i] = d[y];
			}
		}
	}
	return (s);
}
