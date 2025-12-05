#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * sum_dlistint - Calcule la somme de tous les éléments (n)
 * d'une liste dlistint_t
 * @head: Pointeur vers le début de la liste doublement chaînée
 *
 * Return: La somme des valeurs de chaque n. Retourne 0 si la liste est vide.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
