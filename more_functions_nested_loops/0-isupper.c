#include "main.h"
#include <stdio.h>

/**
 * _isupper - Verifie si les lettres sont en majuscule
 * @c: caractere que le prototype va verifier
 *
 * Return: 1 si la lettre est en majuscule sinon return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
