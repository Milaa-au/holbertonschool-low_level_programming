#include "main.h"
#include <ctype.h>

/**
 * string_toupper - Transforme une chaine de char de min en maj
 * @str: tab char
 *
 * Return: char (SUCCESS)
 */

char *string_toupper(char *str)
{
	int a;

	while (str[a] != '\n')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str[a]);
}
