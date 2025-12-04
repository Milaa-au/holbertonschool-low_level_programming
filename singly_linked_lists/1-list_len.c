#include <stdio.h>
#include "lists.h"

/**
 * add_node - Ajoute un nouveau nœud au début d'une liste chaînée
 * @head: Pointeur vers le pointeur du premier nœud de la liste
 * @str: Chaîne de caractères à stocker dans le nouveau nœud
 *
 * Description: Alloue un nouvel espace mémoire pour le nœud et
 * pour la chaîne str, calcule la longueur de str, puis l'ajoute
 * au début de la liste. Le nouveau nœud devient le nouveau head.
 *
 * Return: Adresse du nouveau nœud ajouté, ou NULL en cas d'échec
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
