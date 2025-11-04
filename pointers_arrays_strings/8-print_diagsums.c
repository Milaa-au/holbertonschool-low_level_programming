#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Affiche la somme de 2 diags
 * @a: tableau 2d
 * @size: taille du tableau
 *
 * Return: rien (void)
 */

void print_diagsums(int *a, int size)
{
	int i;
	int result1 = 0;
	int result2 = 0;

	for (i = 0; i < size; i++)
	{
		result1 += a[i * size + i];
		result2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", result1, result2);
}
