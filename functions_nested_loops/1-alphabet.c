#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - Prints the alphabet
 *
 * Return: Always 0 (Sucess)
 *
 */

void print_alphabet(void)
{
	char ltr = 'a';
		while (ltr <= 'z')
		{
		_putchar(ltr);
		}
	ltr++;
	_putchar('\n');
}
