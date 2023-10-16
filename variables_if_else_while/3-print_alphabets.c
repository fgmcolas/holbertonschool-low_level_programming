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
	char letter = 'a';
	char Letter = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (Letter <= 'Z')
	{
		putchar(Letter);
		Letter++;
	}

	putchar('\n');
	return (0);
}
