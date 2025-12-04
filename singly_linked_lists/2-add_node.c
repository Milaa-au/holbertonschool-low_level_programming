#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

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

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str); /* strdup permet de alloue un nouvel espace mémoire*/
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
