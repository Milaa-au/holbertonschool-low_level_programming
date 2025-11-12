#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - Fonction qui concate 2 chaines de char.
 * @s1: premier v
 * @s2: deuxieme v
 *
 * Return: Pointer
 */

char *str_concat(char *s1, char *s2)
{
	int size, a, j, b, i;
	char *result;
	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	
	while (*s1 != '\0')
	{
		a++;
	}

	while (*s2 != '\0')
	{
		b++;
	}
	size = a + b + 1;

	result = malloc(size);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < b; j++)
	{
		result[i + j] = s2[j];
	}
	result[a + b] = '\0';
	return (result);
}
