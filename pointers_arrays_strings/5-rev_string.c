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
	int n = 0;
	int i;
	int j = 0;

	if (j == n)
	{
		while (s[n] != '\0')
		{
			_putchar(s[n]);
			n++;
			j++;
		}
	}
	_putchar('\n');
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
