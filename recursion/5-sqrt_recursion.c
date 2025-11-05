#include "main.h"
#include <stdio.h>

/**
 * calcul - Fonction qui calcule la racine carre d'un nb
 * @n: n
 * @i: i
 *
 * Return: result (Sucess)
 */

int calcul(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (calcul(n, i + 1));
}

/**
 * _sqrt_recursion - Fonction qui renvoie la racine carre d'un nb
 * @n: le nb
 *
 * Return: result (Sucess)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (calcul(n, 0));
}
