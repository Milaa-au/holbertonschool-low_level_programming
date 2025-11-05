#include "main.h"
#include <stdio.h>

/**
 * factorial - fonction qui renvoie le facteur d'un nombre
 * @n: le nombre en question
 *
 * Return: le factoriel
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
