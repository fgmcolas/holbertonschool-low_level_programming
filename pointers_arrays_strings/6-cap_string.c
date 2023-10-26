#include "main.h"
#include <stdio.h>

/**
 * cap_string - prototypes
 *
 * @s: pointer
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int i;
	int j;
	char c[] = {',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (s[i] == c[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
