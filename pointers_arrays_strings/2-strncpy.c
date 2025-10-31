#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Fonction qui copie avec limite de taille
 * @dest: copie
 * @src: a copie
 * @n: limite de taille
 *
 * Return: dest (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	{
	int x = 0;

	while (src[x] != '\0' && x < n)
	{

		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

