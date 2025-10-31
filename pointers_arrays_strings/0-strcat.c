#include "main.h"
#include <stdio.h>

/**
 * _strcat - Fonction qui concate deux chaines de characteres.
 * @dest: chaine de char a ajouter a src
 * @src: chaine de char source
 *
 * Return: char (Success)
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int o = 0

	while (dest[o] != '\0')
	{
		o++;
	}
	while (src[x] != '\0')
	{
		dest[o + x] = src[x];
		x++;
	}
	dest[o + x] = '\0';
	return (dest);
}
