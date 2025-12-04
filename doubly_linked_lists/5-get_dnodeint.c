#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
* free_list - Fonction qui libère la liste
* @head: Pointeur vers le premier élément de la liste
*
* Return: rien (void)
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *h = head;
    unsigned int count = 0;

    while (h != NULL)
    {
        if (count == index)
        {
            return h;  /* Retourne le nœud à l'index demandé */
        }
        h = h->next;  /* Passe au nœud suivant */
        count++;
    }
    return (NULL);
}
