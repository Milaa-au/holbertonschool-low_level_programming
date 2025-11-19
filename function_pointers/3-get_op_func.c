#include <stddlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* get_op_func - Determine le chiffre et appel prototype en fonction pour calcul
* @s: pointer
*
* Return: un entier
*/

int (*get_op_func(char *s))(int, int)
{
	int num1 = 0, num2 = 0;

	if (argv != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strchr(argv[2], '+') == 0)
	{
		result = op_add(num1, num2);
	}
	else if (strcmp(argv[2], "-") == 0)
	{
		result = op_sub(num1, num2);
	}
	else if (strcmp(argv[2], "*") == 0)
	{
		result = op_mul(num1, num2);
	}
	else if (strcmp(argv[2], "/") == 0)
	{
		if (num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
		result = op_div(num1, num2);
	}
	else if (strcmp(argv[2], "%" == 0))
	{
		if (num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
	}
	printf("%d\n", result);
	return (0);
}
