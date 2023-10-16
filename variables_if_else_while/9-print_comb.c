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
	int numb = 0;

	while (numb < 10)
	{
		putchar('0' + numb);
		if (numb < 9)
		{
			putchar(',');
			putchar(' ');
		}
		numb++;
	}

	putchar('\n');
	return (0);
}
