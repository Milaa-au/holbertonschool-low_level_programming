#include "main.h"
#include <stdio.h>

/**
 * *_memset - Fonction qui remplit la memoire avec un octe
 * @s: Tableau
 * @b: Ce qu'on veut ajouter dans le tableau
 * @n: Combien de fois on veut l'ajouter dans le tableau
 *
 * Return: s (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > i)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
