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
	int n;

	while (n = 0; *s != '\0')
	{
		n++;
	}
	for (; s[n] != '\0'; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
