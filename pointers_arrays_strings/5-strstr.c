#include "main.h"
#include <stdio.h>

/**
 * *_strstr - Fonction qui localise une sous chaine
 * @haystack: premiere chaine
 * @needle: sous chaine
 *
 * Return: Null or pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	i++;
	}
	return (0);
}
