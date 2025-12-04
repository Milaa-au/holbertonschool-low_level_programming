#include <stdio.h>
#include "lists.h"

/**
 * list_len - Compte le nombre de nœuds dans une liste chaînée
 * @h: Pointeur vers le premier nœud de la liste
 *
 * Description: Parcourt la liste et compte le nombre de nœuds.
 * Si un nœud contient un champ str NULL, la fonction renvoie 0.
 *
 * Return: Nombre de nœuds dans la liste
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			return (0);
		}
		count++;
		h = h->next;
	}
	return (count);
}
