#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Supprime un nœud d’une liste doublement chaînée
 * @head: Pointeur vers le pointeur de tête de la liste
 * @idex: Position du nœud à supprimer (commence à 0)
 *
 * Return: 1 en cas de succès, -1 en cas d’échec
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	if (*head == NULL)
	{
		return (-1);
	}

	temp = *head;

	while (index != 0)
	{
		if (temp == NULL)
		{
			return (-1);
		}
		temp = temp->next;
		index--;
	}
	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}

	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
		{
			temp->next->prev = temp->prev;
		}
	}

	free(temp);
	return (1);
}