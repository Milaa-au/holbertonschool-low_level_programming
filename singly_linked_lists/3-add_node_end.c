#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Ajoute un nouveau nœud à la fin d'une liste chaînée
 * @head: Pointeur vers le pointeur du premier nœud de la liste
 * @str: Chaîne de caractères à stocker dans le nouveau nœud
 *
 * Description: Alloue un nouvel espace mémoire pour le nœud et
 * pour la chaîne str, calcule la longueur de str, puis l'ajoute
 * à la fin de la liste. Si la liste est vide, le nouveau nœud
 * devient le premier.
 *
 * Return: Adresse du nouveau nœud ajouté, ou NULL en cas d'échec
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
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
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		temp = temp->next;
		temp->next = new;
	}
	return (new);
}
