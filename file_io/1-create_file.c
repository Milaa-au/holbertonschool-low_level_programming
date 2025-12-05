#include "main.h"
#include <stdlib.h>

/**
 * create_file - Crée un fichier et y écrit du texte
 * @filename: Nom du fichier à créer
 * @text_content: Chaîne de caractères à écrire dans le fichier
 *
 * Return: 1 en cas de succès, -1 en cas d’échec
 *
 * Description:
 * Cette fonction crée un fichier avec les permissions rw------- (0600).
 * Si le fichier existe déjà, il est tronqué.
 * Si text_content n'est pas NULL,
 * son contenu est écrit dans le fichier. En cas d'erreur (fichier impossible
 * à créer, ou écriture échouée), la fonction retourne -1.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (o == -1)
	{
		return (-1);
	}

	w = write(o, text_content, len);
	if (w == -1)
	{
		return (-1);
	}

	close(o);
	return (1);
}
