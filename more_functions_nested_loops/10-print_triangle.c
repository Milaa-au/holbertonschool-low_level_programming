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
	}
	for (i = 1; i <= size; i++)
	{
		_putchar(' ')
		for (j = i; j < size; j++)
		{
			putchar('#');
		}
		_putchar('\n');
	}
}
