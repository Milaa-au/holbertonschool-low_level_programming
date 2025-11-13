#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Fonction qui alloue de la memoire a un tableau
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: rien (void)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int j;
	char *i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	i = malloc(nmemb * size);
	if (i == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < nmemb * size; j++)
	{
		i[j] = 0;
	}
	return (i);
}
