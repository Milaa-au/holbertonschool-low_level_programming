#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Fonction qui enverse chaine int
 * @a: chaine int
 * @n: int
 *
 * Return: rien (void)
 */

void reverse_array(int *a, int n)
{
	int e = n - 1;

	for (; e >= 0; e--)
	{
		printf("%d", a[e]);
		if (e != 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
