#include "main.h"

/**
 * puts_half - Fonction qui affiche seulement la moitie d'une string
 * @str: string
 *
 * Return: rien (void)
 */

void puts_half(char *str)
{
	int n;
	int tailleint;
	int div;

	for (n = 0; str[n] != '\0'; n++)
	{
		taille++;
		if (taille % 2 == 0)
		{
			div = taille / 2;
		}
		else
		{
			div = (taille - 1) / 2 + 1;
		}
		for (n = div; n < taille; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
