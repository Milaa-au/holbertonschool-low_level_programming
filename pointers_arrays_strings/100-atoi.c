#include "main.h"

/**
 * _atoi - Fonction qui renvoie les entiers dun tableau
 * @s: la tableau
 *
 * Return: le resultat
 */

int _atoi(char *s)
{
	int i;
	int result = 0;
	int negatif = 1;
	int fin = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			negatif = -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			fin = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (fin == 0)
		{
			break;
		}
	}

	return (result * negatif);
}
