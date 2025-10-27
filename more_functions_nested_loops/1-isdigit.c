#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Verifie si c'est bien un entier entre 0 et 9
 * @c: Entier qu'on va lui donner
 * Return: 1 si c'est un entier entre 0 et 9 sinon return 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
