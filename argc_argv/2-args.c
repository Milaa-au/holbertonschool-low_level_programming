#include <stdio.h>

/**
 * main - programme qui affiche le nom
 * @argc: 1 er
 * @argv: renvoie le nom
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
