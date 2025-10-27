#include <stdio.h>
#include "main.h"

/**
 * print_numbers - va afficher 0123456789
 *
 * Return: rien (void)
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
