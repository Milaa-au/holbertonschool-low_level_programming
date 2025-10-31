#include "main.h"
#include <ctype.h>

/**
 * cap_string - Transforme la premier lettre en maj
 * @str: tab char
 *
 * Return: char (SUCCESS)
 */

char *cap_string(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z' && str[a] == ' ')
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
