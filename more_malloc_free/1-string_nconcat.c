#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - Pototypes
 *
 * @s1: pointer
 * @s2: pointer
 * @n: unsigned int
 *
 * Return: NULL or r
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1;
	unsigned int l2;
	unsigned int i;
	unsigned int j;
	char *result;

	if (s1 == (NULL))
	{
		s1 = "";
	}
	if (s2 == (NULL))
	{
		s2 = "";
	}
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	if (n >= l2)
	{
		n = l2;
	}

	result = (char *) malloc(l1 + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		result[i + j] = s2[j];
	}
	result[i + j] = '\0';
	return (result);
}
