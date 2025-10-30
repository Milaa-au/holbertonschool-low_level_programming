#include <stdio.h>
#include "main.h"

/**
 * _puts - Fonction qui affiche une string
 * @str: La string en question
 *
 * Return: rien (void)
 */

void _puts(char *str)
{

	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
}
