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
	int i, c, result;

	result = 0;

	if (argc <= 2)
	{
		printf("0\n");
		return (1);
	}
	for (c = 1; c < argc; c++)
	{
		if (argv[c][0] == '/')
		{
			continue;
		}
		for (i = 0; argv[c][i] != '\0'; i++)
		{
			if (argv[c][i] < '0' || argv[c][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[c]);
	}
	printf("%d\n", result);
	return (0);
}
