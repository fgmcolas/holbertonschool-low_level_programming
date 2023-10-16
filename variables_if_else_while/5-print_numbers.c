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
	int number = 0;

	while (number <= 10)
	{
		putchar('0' + number);
		number++;
	}

	putchar('\n');
	return (0);
}
