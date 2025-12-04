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

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
