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
	int hexa = 0;

	while (hexa < 16)
	{
	if (hexa < 10)
	{
		putchar('0' + hexa);
	}
	else
	{
		putchar('a' + hexa - 10);
	}
	hexa++;
	}

	putchar('\n');
	return (0);
}
