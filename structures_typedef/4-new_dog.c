#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - retourne pointeur dog_t
 * @name: nom
 * @age: age
 * @owner: proprio
 *
 * Return: pointeur
 */

dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

/**
 * _strlen - Longueur string
 * @s: string
 *
 * Return: la longueur de la string
 */

int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}

	return (n);
}

/**
 * _strcpy - Fonction qui copie la chaine de char pointer
 * @dest: destination
 * @src: pointer
 *
 * Return: dest (result)
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

/**
 * new_dog - retourne pointeur dog_t
 * @name: nom
 * @age: age
 * @owner: proprio
 *
 * Return: pointeur
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *chien;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	chien = malloc(sizeof(dog_t));
	if (chien == NULL)
	{
		return (NULL);
	}
	chien->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (chien->name == NULL)
	{
		free(chien);
		return (NULL);
	}
	chien->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (chien->owner == NULL)
	{
		free(chien->name);
		free(chien);
		return (NULL);
	}

	chien->name = _strcpy(chien->name, name);
	chien->age = age;
	chien->owner = _strcpy(chien->owner, owner);

	return (chien);
}
