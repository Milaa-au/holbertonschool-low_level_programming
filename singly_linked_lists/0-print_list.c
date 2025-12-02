#include <stdio.h>
#include "lists.h"

/**
 * print_list - Affiche tous les éléments d'une liste chaînée list_t
 * @h: Pointeur vers le premier élément de la liste
 *
 * Return: Le nombre de nœuds de la liste list_t
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
