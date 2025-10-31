#include "main.h"

/**
 * _atoi - Fonction qui renvoie les entiers dun tableau
 * @s: la tableau
 *
 * Return: le resultat
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int result = 0;
	int negatif = 1;
	int fin = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			negatif = negatif * -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			fin = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (fin)
		{
			break;
		}
		i++;
	}
	return (result * negatif);
}
