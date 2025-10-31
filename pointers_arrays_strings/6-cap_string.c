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
	int i = 0;
	char separ[] = {' ', '\t', '\n', '.', ',', ';', '!',
	'?', '"', '(', ')', '{', '}'};
	while (str[i] != '\0')
	{
		size_t x;
		int is_spe = 0;

		if (i != 0)
		{
			for (x = 0; x < sizeof(separ) / sizeof(separ[0]); x++)
			{
				if (str[i - 1] == separ[x])
				{
					is_spe = 1;
					break;
				}
			}
		}

		if ((i == 0 && str[i] >= 'a' && str[i] <= 'z') ||
		(i != 0 && is_spe && str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= ('a' - 'A');
		}
		i++;
	}
	return (str);
}
