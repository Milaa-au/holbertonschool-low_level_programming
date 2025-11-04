#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - Fonction qui cherche des char dans une chaine de char
 * @s: La ou je vais chercher
 * @accept: Ce qu'on cherche
 *
 * Return: accept or NULL (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}

	return (NULL);
}

