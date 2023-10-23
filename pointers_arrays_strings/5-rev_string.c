#include "main.h"
#include <stdio.h>

/**
 * rev_string - prototypes
 *
 * @s: pointer
 */

void rev_string(char *s)
{
	int l = 0;
	char t;
	int i;
	int j;

	while (s[l] != '\0')
		l++;
	for (i = 0, j = l - 1; i < j; i++, j--)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}
