#include <stdio.h>
#include "main.h"

/**
 * print_square - faire un carre avec des hashtag
 * @size: taille du carre
 *
 * Return: rien (void)
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
