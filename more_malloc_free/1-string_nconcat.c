#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Fonction qui concatenates deux strings
 * @s1: 1er string
 * @s2: 2e string
 * @n: n
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size;
	int a, b;

	a = 0;
	b = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[a] != '\0')
	{
		a++;
	}
	
	while (s2[b] != '\0')
	{
		b++;
	}

	if (n >= s2[b])
	{
		n = s2[b];
	}
	else
	{
		size = 

