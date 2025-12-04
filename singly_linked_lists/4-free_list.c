#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_list - Libère tous les éléments d'une liste chaînée
 * @head: Pointeur vers le premier nœud de la liste
 *
 * Description: Parcourt la liste et libère la mémoire
 * allouée pour chaque nœud ainsi que pour le champ str.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
