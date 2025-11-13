#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Fonction qui alloue de la memoire
 * @b: var
 *
 * Return: rien (void)
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
