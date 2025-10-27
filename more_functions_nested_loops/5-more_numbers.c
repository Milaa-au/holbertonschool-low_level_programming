#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 */

void more_numbers(void)
{
	int x = 0;
	char n;

	for (x = 0; x <= 14; x++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			_putchar(n);
		}
	}
	_putchar('\n')
}
