#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
	putchar(letter);
	letter--;
	}

	putchar('\n');
	return (0);
}
