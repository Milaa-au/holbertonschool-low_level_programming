#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Affichier les nombres de 0 a 14 10x
 * 
 * Return: rien (void)
 */

void more_numbers(void)
{
	int x = 0;
	char n;

	for (x = 0; x <= 9; x++)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
