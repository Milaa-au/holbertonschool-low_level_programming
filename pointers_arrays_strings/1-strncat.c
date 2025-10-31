#include "main.h"
#include <stdio.h>

/**
 * _strncat - Fonction qui concate deux chaines de characteres avec une limite.
 * @dest: chaine de char a ajouter a src
 * @src: chaine de char source
 * @n: limite de taille
 *
 * Return: char (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int o = 0;

	while (dest[o] != '\0')
	{
		o++;
	}
	while (src[x] != '\0' && x < n)
	{
		dest[o + x] = src[x];
		x++;
	}
	dest[o + x] = '\0';
	return (dest);
}
