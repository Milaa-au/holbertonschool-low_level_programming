#include "main.h"

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

	for (e = 0; a[e] != '\0'; e++)
	{
		if (e == n)
		{
			_putchar(a[n]);
		}
		_putchar(a[e]);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
