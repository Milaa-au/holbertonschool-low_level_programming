#include "main.h"

/**
 * _strcpy - Fonction qui copie la chaine de char pointer
 * @dest: destination
 * @src: pointer
 *
 * Return: dest (result)
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
