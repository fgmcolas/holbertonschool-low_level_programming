#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <limits.h>
#include "main.h"

/**
 * print_last_digit - print the last digit of n
 * @n: The number to print
 * main - Entry point
 * Return: Always last_digit (Sucess)
 * ld - lastdigit
 * int - ld
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		if (n == INT_MIN)
		{
			n = -8;
		}
		n = -n;
	}
	ld = n % 10;
	_putchar('0' + ld);
	return (ld);
}
