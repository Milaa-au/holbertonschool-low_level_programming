#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int putchar(void)
{
	char *msg = "_putchar";
	int i;

	for (i = 0; msg[i] != '\0'; i++)
	{
		_putchar(msg[i]);
	}
	_putchar('\n');
	return (0);
}
