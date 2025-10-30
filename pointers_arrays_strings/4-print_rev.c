#include <stdio.h>
#include "main.h"

/**
 * print_rev - Fonction qui renvoie l'interieur d'une string a l'envers
 * @s: la string
 *
 * Return: rien (void)
 */

void print_rev(char *s)
{
	int n = 0;
	int i;

	while (s[n] != '\0')
	{
		n++;
	}
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
