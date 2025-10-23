#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Print alphabets a to z
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a', letter <= 'z')
	{
		_putchar(letter)
	}

	return (0);
}
