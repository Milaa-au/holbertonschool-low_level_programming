#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Lit un fichier texte et l’affiche sur la sortie standard.
 * @filename: Pointeur vers le nom du fichier à lire.
 * @letters: Nombre de lettres à lire et à afficher.
 *
 * Description:
 * Cette fonction ouvre un fichier en lecture seule, alloue un buffer pour
 * stocker son contenu, lit jusqu'à @letters caractères depuis ce fichier,
 * puis les écrit sur la sortie standard (STDOUT).
 *
 * Si une erreur survient à n’importe quelle étape (filename NULL, échec
 * de malloc, open, read ou write), la fonction retourne 0.
 *
 * Return:
 * Le nombre réel d’octets écrits sur STDOUT en cas de succès.
 * Retourne 0 en cas d’erreur ou d’échec.
 */

int append_text_to_file(const char *filename, char *text_content)
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

	o = open(filename, O_WRONLY | O_APPEND);
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
