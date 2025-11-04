#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Fonction qui affiche un echiquier
 * @a: la ou est rang√© l'√chiquier
 *
 * Return: rien (void)
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
