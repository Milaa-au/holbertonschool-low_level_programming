#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Renvoie le nœud à un index donné
 * d'une liste doublement chaînée
 * @head: Pointeur vers le premier nœud de la liste
 * @index: Index du nœud à récupérer (commence à 0)
 *
 * Description: Parcourt la liste doublement chaînée depuis le
 * début et renvoie un pointeur vers le nœud situé à l'index
 * spécifié. Si l'index est hors de portée, retourne NULL.
 *
 * Return: Pointeur vers le nœud à l'index donné, ou NULL si
 * l'index n'existe pas
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h = head;
	unsigned int count = 0;

	while (h != NULL)
	{
		if (count == index)
		{
			return (h);
		}
		h = h->next;
		count++;
	}
	return (NULL);
}
