#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet
 *
 * main - Entry point
 * Return: Always 0 (Sucess)
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;
		while (i < 10)
		{
			char ltr = 'a';

			while (ltr <= 'z')
			{
				_putchar(ltr);
				ltr++;
			}
			_putchar('\n');
			i++;
		}
}
