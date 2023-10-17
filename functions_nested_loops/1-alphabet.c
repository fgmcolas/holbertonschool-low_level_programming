#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char ltr = 'a';
		while (ltr <= 'z')
		{
		_putchar(ltr);
		ltr++;
		}
		_putchar('\n');
		return (0);
}
