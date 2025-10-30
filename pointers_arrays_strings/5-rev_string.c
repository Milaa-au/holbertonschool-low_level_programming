#include <stdio.h>
#include "main.h"

/**
 * rev_string - Fonction qui inverse une string
 * @s: string a inverser
 *
 * Return: rien (void)
 */

void rev_string(char *s)
{
	int n;
	int i;
	char l;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (i = 0; i < n /2; i++)
		{
			l = s[i];
			s[i] = s[n - 1 - i];
			s[n - 1 - i] = l;
		}
	}
}
