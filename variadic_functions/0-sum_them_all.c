#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - Fonction qui calcul la somme des param
* @n: .
*
* Return: entier (int)
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int valeur = va_arg(args, int);

		sum += valeur;
	}

	va_end(args);
	return (sum);
}
