#include <stdio.h>
#include "lists.h"

/**
 * print_list - Affiche tous les éléments d'une liste chaînée
 * @h: Pointeur vers le premier nœud de la liste
 *
 * Description: Parcourt la liste et affiche le contenu de chaque nœud.
 * Pour chaque nœud, affiche la longueur de la
 * chaîne et la chaîne elle-même.
 * Si le champ str est NULL, affiche "[0] (nil)".
 *
 * Return: Nombre de nœuds dans la liste
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
