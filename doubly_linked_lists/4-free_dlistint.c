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

void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    while (head != NULL)
    {
        temp = head->next;
        free(head->next);
        free(head);
        head = temp;
    }
}