#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - Copie les valeurs d'une autre botie
 * @dest: Premier tableau
 * @src: Valeur a copier
 * @n: taille du tableau a copie
 *
 * Return: dest (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (n > i)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
