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
	unsigned int i;
	unsigned int j;
	int valid;

	for (i = 0; s[i] != '\0'; i++)
	{
		valid = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				valid = 1;
				break;
			}
		}
		if (!valid)
		{
			break;
		}
	}
	return (i);
}
