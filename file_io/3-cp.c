#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_buffer - Alloue un tampon de 1024 octets.
 * @file: Nom du fichier associé au tampon
 * (utilisé pour les messages d’erreur).
 *
 * Return: Un pointeur vers le tampon alloué.
 *
 */

char *create_buffer(void)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate buffer\n");
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Ferme un descripteur de fichier.
 * @fd: Le descripteur de fichier à fermer.
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copie le contenu d’un fichier dans un autre.
 * @argc: Nombre d’arguments transmis au programme.
 * @argv: Tableau contenant les arguments.
 *
 * Return: 0 en cas de succès, ou un code d’erreur en cas d’échec.
 *
 * Description:
 * Ce programme copie le contenu du fichier `file_from` vers `file_to`.
 * - Si le nombre d’arguments est incorrect → code 97.
 * - Si `file_from` n’existe pas ou ne peut être lu → code 98.
 * - Si `file_to` ne peut pas être créé ou écrit → code 99.
 * - Si un descripteur de fichier ne peut pas être fermé → code 100.
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	buffer = create_buffer();
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	while ((r = read(from, buffer, 1024)) > 0)
	{
		w = write(to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
	}
	if (r == -1)
		dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}
