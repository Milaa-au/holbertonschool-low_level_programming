#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Fonction qui renvoie la longueur d'une string
 * @s: la string
 *
 * Return: 0 (Success)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
