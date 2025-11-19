#include "function_pointers.h"

/**
 * print_name - Fonction qui s'appelle elle meme
 * @name: nom
 * @f: pointer sur fonction qui prend un char *
 *
 * Return: rien (void)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == 0)
	{
		return;
	}
	if (f == 0)
	{
		return;
	}
	f(name);
}
