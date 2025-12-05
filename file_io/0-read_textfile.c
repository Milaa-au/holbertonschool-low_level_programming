#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Lit un fichier texte et l'affiche sur la sortie standard
 * @filename: Nom du fichier à lire
 * @letters: Nombre maximum de caractères à lire et à afficher
 *
 * Return: Le nombre réel de caractères lus et affichés,
 *         ou 0 en cas d'erreur (fichier inexistant, lecture impossible,
 *         écriture impossible ou filename NULL)
 *
 * Description:
 * Cette fonction ouvre un fichier en lecture seule, lit jusqu'à un nombre
 * spécifié de caractères et les écrit sur la sortie standard. Elle gère
 * toutes les erreurs possibles : ouverture, allocation mémoire, lecture
 * et écriture. En cas de problème, la fonction retourne 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		free(buffer);
		return (0);
	}

	r = read(o, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(o);
		return (0);
	}

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || w != r)
	{
		free(buffer);
		close(o);
		return (0);
	}
	free(buffer);
	close(o);
	return (w);
}
