#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - fait une diagonal
 * @n: taille de la diagonal
 *
 * Return: rien (void)
 *
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
