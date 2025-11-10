#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - Fonction renvoie un pointer vers un espace memoire
 * @str: pointer
 *
 * Return: Null if str = NULL
 */

char *_strdup (char *str)
{
	char *d;
	int i, len = 0;

	if (str == 0)
	{
		return (0);
	}
	for (i = 0; str[i]; i++)
	{
		len++;
	}

	d = malloc(sizeof(char) * (len + 1));

	if (d == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		d[i] = str[i];
	}
	d[len] = '\0';
	return (d);
}
