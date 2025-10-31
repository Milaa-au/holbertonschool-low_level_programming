#include "main.h"
#include <ctype.h>

/**
 * string_toupper - Transforme une chaine de char de min en maj
 * @*: tab char
 *
 * Return: char (SUCCESS)
 */

char *string_toupper(char *)
{
	int a;

	while (*a != '\n')
	{
		if (*a >= 'a' && *a <= 'z')
		{
			*a = *a - 32;
		}
		a++;
	}
	return (*a);
}
