#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print alphabet x 10
 *
 *
 */

void print_alphabet_x10(void)
{
	int x = 0;
	char letter;

	for (x = 0; x < 10; x++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
			_putchar('\n');
		}
	}
}

