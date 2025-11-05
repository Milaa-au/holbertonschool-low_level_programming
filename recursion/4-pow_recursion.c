#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Fonction qui return la valeur de x a la pui de y
 * @x: nombre
 * @y: puissance
 *
 * Return: result (Sucess)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
