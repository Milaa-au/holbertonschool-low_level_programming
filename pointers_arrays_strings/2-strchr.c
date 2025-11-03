#include "main.h"
#include <stdio.h>

/**
 * *_strchr - Fonction qui localise un char dans une string
 * @s: la chaine
 * @c: ce qu'on doit localiser
 *
 * Return: Null si il trouve rien sinon s[i] si il trouve
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}

