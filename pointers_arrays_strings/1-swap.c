#include "main.h"

/**
 * swap_int - Echange les valeurs de deux entiers
 * @a: premier entier
 * @b: deuxieme entier
 *
 * Return: rien (void)
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
