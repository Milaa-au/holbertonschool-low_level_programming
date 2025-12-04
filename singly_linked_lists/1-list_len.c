#include <stdio.h>
#include "lists.h"

/**
 * print_list - Fonction qui renvoie le nombre d'element d'une liste chainee
 * @h: Pointeur vers le premier élément de la liste
 *
 * Return: Le nombre de nœuds de la liste list_t
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			return(0);
		}
		count++;
		h = h->next;
	}
	return (count);
}
