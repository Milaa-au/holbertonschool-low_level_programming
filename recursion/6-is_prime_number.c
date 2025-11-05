#include "main.h"
#include <stdio.h>

/**
 * deux - Fonction qui verifie si ce sont des nombres premiers
 * @n: le nombre a verif
 * @i: deuxieme nombre pour calculer
 *
 * Return: Result (Sucess)
 */

int deux(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (deux(n, i + 1));
}

/**
 * is_prime_number - Fonction qui verifie si ce sont des nombres premiers
 * @n: le nombre a verif
 *
 * Return: Result (Sucess)
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (deux(n, 2));
}
