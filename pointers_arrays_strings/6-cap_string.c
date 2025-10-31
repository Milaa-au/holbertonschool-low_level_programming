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
	int i;
	char separators[] = {' ', '\t', '\n', '.', ',', ';', '!',
	'?', '"', '(', ')', '{', '}'};

	if (str[a] >= 'a' && str[a] <= 'z')
	{
		str[a] -= 32;
	}

	while (str[a] != '\0')
	{
		for (i = 0; i < sizeof(separators); i++)
		{
			if (str[a] == separators[i] && str[a + 1] >= 'a' && str[a + 1] <= 'z')
			{
				str[a + 1] -= 32;
				break;
			}
		}
		a++;
	}
	return (str);
}
