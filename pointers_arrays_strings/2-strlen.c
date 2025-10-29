#include "main.h"

/**
 * _strlen - Fonction qui renvoie la longueur d'une string
 * @s: N/A
 *
 * Return: Longueur de la string (Success)
 */

int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return n;
}
