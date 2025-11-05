#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Fonction qui affiche une chaine de char
 * @s: chaine de char
 *
 * Return: rien (void)
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}	
