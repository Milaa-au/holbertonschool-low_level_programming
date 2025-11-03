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
	int valid = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				valid = 1;
				break;
			}
			j++;
		}
		if (!valid)
		{
			break;
		}
		e++;
		i++;
	}
	return (e);
}
