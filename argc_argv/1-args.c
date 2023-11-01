#include <stdio.h>

/**
 * main - function
 *
 * @argc: variable
 * @argv: char
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	printf("%d\n", argc - 1);
	return (0);
}
