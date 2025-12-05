#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the list
 * @idx: Index where the new node should be inserted
 * @n: Value to store in the new node
 *
 * Return: Address of the new node, or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;

	if (h == 0)
	{
		return (NULL);
	}
	temp = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (idx > 1)
	{
		if (temp == NULL)
			return (NULL);

		temp = temp->next;
		idx--;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
