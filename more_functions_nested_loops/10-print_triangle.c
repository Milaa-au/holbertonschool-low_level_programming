#include "main.h"
#include <stdio.h>

/**
 * print_triangle - script qui fait un triangle inversé
 * @size: taille du triangle
 *
 * Return: rien (void)
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)

			putchar(' ');

		for (j = 0; j < i; j++)

		_putchar('#');

		_putchar('\n');
	}
}
