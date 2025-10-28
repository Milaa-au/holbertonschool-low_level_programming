#include <stdio.h>
#include "main.h"

/**
 * FizzBuzz - Verifie multiple 3-5 ou les deux
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 10 == 5 && a % 10 == 0))
		{
			printf("Buzz ");
		}
		else if (a % 10 == 5 || a % 10 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	return (0);
}

