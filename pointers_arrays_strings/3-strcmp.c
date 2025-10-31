#include <stdio.h>
#include "main.h"

/**
* _strcmp - Compare deux chaine de chars
* @s1: 1er chaine de chars
* @s2: 2e chaine de char
* Return: fin
*/

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		return (s1[x] - s2[x]);
		x++;
	}
	return (s1[x] - s2[x]);
}
