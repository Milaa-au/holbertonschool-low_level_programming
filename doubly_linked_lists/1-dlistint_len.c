#include <stdio.h>
#include "lists.h"

/**
 * print_list - Affiche tous les éléments d'une liste chaînée
 * @h: Pointeur vers le premier élément de la liste
 *
 * Return: Le nombre de nœuds de la liste dlistint_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
