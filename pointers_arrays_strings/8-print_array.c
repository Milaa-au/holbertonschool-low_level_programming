#include "main.h"
#include <stdio.h>

/**
 * print_array - Fonction qui  affiche les n premiers elements string
 * @a: tableau d'entier
 * @n: nombre delement a afficher
 *
 * Return: rien (void)
 */

void print_array(int *a, int n)
{
	int e;

	for (e = 0; e < n; e++)
	{
		printf("%d", a[e]);
		if (e != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
