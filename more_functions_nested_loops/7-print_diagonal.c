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
	for (; n > 0; n--)
	{
		for (; n > 0; n--)
		{
			_putchar(' ')
		}
		_putchar('\')
		_putchar('\n')
	}
	__putchar('\n')
}
