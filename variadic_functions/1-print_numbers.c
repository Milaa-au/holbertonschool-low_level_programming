#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - Affiche des nb suivis d'un saut à la ligne
* @separator: .
* @n: .
*
* Return: rien (void)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    int num;

    va_start(args, n);
    for (i = 0; i < n; i++)
    {
        num = va_arg(args, int);
        printf(%d, num);
        if (separator != NULL && i < -1)
        printf(%d, separator);
    }
	va_end(args);
	printf("\n");
}