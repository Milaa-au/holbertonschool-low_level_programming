#include <stdio.h>
#include <stdlib.h>

/**
 * main - Programme qui multiplie de nombre entre eux
 * @argv: tableau
 * @argc: les arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, c;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	c = atoi(argv[2]);
	printf("%d\n", i * c);
	return (0);
}
