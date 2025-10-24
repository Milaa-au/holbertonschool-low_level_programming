#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */

int print_last_digit(int n)
{
	last_digit = last_digit % 10;
	if (last_digit > 0)
	{
		last_digit = -last_digit
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
