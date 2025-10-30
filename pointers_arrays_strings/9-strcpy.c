#include "main.h"
#include <main.h>

/**
 * *_strcpy - Fonction qui copie la chaine de char pointer
 * @dest: destination
 * @src: pointer
 *
 * Ruturn: 0 (Success)
 */

void *_strcpy(char *dest, char *src)
{
	int n;
	int x;

	while (*(scr + n) != '\0')
	{
		n++;
	}
	for (; x < n ; x++)
	{
		dest[x] = src[x];
	}
	dest[n] = '\n';
	return (dest);
}
