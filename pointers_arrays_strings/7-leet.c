#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * leet - Fonction qui encore une chaine de char en 1337
 * @str: Chaine de char
 *
 * Return: result (Sucess)
 */

char *leet(char *str)
{
	char l[] = "aAeEoOtTlL";
	char n[] = "4433007711";
	int x, i;

	for (x = 0; str[x] != '\0'; x++)
	{
		for (i = 0; i < 10; i++)
		{
			if (str[x] == l[i])
			{
				str[x] = n[i];
				break;
			}
		}
	}
	return (str);
}
