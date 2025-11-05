#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Fonction qui affiche a l'envers
 * @s: chaine de char
 *
 * Return: rien (void)
 */

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

