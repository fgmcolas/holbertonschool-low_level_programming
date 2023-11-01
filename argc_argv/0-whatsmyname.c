#include <stdio.h>

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
	if (argc < 1)
	{
		return (1);
	}
	printf("%s\n", argv[0]);
	return (0);
}
