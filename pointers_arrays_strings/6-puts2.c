#include "main.h"

/**
 * puts2 - Fonction qui imprime une lettre sur deux
 * @str: tableau
 *
 * Return: rien (void)
 */

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (n % 2 != 1)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
