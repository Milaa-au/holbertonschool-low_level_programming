#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <ctype.h>
#include "variadic_functions.h"

/**
* print_numbers - Affiche des nb suivis d'un saut à la ligne
* @separator: .
* @n: .
*
* Return: rien (void)
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
        string = va_arg(args, char *);
        if (string == 0)
        {
            printf("(nil)");
        }
		else
		{
			printf("%s", string);
		}
		if (separator != NULL && i < n - 1)
        {
            printf("%s", separator);
        }
	}

	va_end(args);
	printf("\n");
}