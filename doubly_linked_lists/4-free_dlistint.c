#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_dlistint - Libère tous les nœuds d'une liste doublement chaînée
 * @head: Pointeur vers le premier nœud de la liste
 *
 * Description: Parcourt la liste doublement chaînée et libère
 * la mémoire allouée pour chaque nœud.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->next);
		free(head);
		head = temp;
	}
}
