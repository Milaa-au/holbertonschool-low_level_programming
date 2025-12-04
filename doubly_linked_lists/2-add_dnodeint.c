#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
* add_dnodeint - Fonction qui ajoute le noeud au dessus (et l'affiche).
* @head: Pointeur vers le premier élément de la liste
* @str: d
*
* Return: new
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new;

    if (head == NULL)
        return (NULL);

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->prev = NULL;
    new->next = *head;

    if (*head != NULL)
        (*head)->prev = new;

    *head = new;

    return (new);
}