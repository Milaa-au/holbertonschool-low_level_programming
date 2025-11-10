#include "main.h"
#include <stdlib>
#include <stdio.h>

/**
 * *_strdup - Fonction renvoie un pointer vers un espace memoire
 * @str: pointer
 *
 * Return: Null if str = NULL
 */

char *_strdup (char *str)
{
	int i;

	if (str == 0)
	{
		return (0);
	}
	for (i = 0; i < sizeof(*str); i++)
	{

