#include <stdio.h>
#include <stdlib.h>
#include <3-calc.h>
#include <string.h>

/**
 * main - Programme qui multiplie de nombre entre eux
 * @argv: tableau
 * @argc: les arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	get_op_func(argv[2]);

	return (0);
}