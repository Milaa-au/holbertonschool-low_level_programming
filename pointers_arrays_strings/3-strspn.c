#include "main.h"
#include <stdio.h>

/**
 * _strspn - Fonction qui calcule la longueur d'une sous chaine
 * @s: 1er segment
 * @accept: 2e segment
 *
 * Return: result (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int e = 0; 

	while (s[i] != '\0')
	{
		while (s[i] == accept[j])

		if (s[i] == accept[j])
		{
			e++;
		}
		j++;
		i++;
	}
	return(e);
}
