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
	unsigned int a, b;
	char *result;
	unsigned int j, i;

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

	if (n >= b)
	{
		n = b;
	}
	
	result = malloc(a + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < a; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < b; j++)
	{
		result[i + j] = s2[j];
	}
	result[a + n] = '\0';

	return (result);
}
