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
	char d;
	char i;

	for (x = 0; x <= 9; x++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				d = n / 10;
				i = n % 10;
				_putchar(d + '0');
				_putchar(i + '0');
			}
			else
			{
				_putchar(n + '0');
			}
		}
		_putchar('\n');
	}
}
