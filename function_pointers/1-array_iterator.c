#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - Fonction qui execute ce qu'il prend en para dans un tableau
 * @size: taille du tab
 * @action: function
 * @array: tab
 *
 * Ruturn: rien (void)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
