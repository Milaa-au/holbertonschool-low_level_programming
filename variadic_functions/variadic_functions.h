#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

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

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
