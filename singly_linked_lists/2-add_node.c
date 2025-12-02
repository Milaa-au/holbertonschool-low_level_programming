#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
* add_node - Fonction qui ajoute le noeud au dessus (et l'affiche).
* @head: h
* @str: d
*
* Return: new
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