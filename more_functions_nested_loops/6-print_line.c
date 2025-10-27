#include <stdio.h>
#include "main.h"

/**
 * print_line - Affiche le nombre de tiret demande
 * @n: nombre de tiret
 *
 * Return: rien (void)
 *
 */

void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');

}
