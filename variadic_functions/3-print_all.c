#include <stdio.h>
#include <stdarg.h>

/**
 * struct form - Structure associant un type de format à une fonction d'affichage
 *
 * @type: Caractère représentant le type (c, i, f, s)
 * @func: Pointeur vers la fonction correspondant à ce type
 *
 */

typedef struct form
{
	char type;
	print_func func;
} form_t;

/**
 * print_func - Typedef for function pointers to printing functions
 *
 * @args: The va_list passed to each printing function
 */
typedef void (*print_func)(va_list args);

/**
 * print_char - Prints a character
 *
 * @args: The list of arguments containing the character to print
 */
static void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer
 *
 * @args: The list of arguments containing the integer to print
 */
static void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float
 *
 * @args: The list of arguments containing the float to print
 */
static void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string
 *
 * @args: The list of arguments containing the string to print
 *
 * Description: If the string is NULL, "(nil)" is printed instead.
 */
static void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - Prints anything based on a format string
 *
 * @format: A constant list of format specifiers:
 *          'c' for char,
 *          'i' for int,
 *          'f' for float,
 *          's' for string.
 *
 * Description:
 * This function iterates through the format string and prints
 * each corresponding argument using the appropriate function.
 * Arguments are separated by ", " when printed.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i, j;
	char *sep = "";

	form_t forms[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
	};

	if (format == NULL)
	{
		printf("\n");
		return;
	}

	va_start(args, format);

	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == forms[j].type)
			{
				printf("%s", sep);
				forms[j].func(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
