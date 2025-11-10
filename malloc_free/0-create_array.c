#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Fonction qui cr√er un tableau de char
 * @size: taille du tableau
 * @c: les chars du tableaux
 *
 * Return: NULL if size = 0 or fails else ok
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
