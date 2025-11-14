#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Fonction qui affiche dog
 * @d: dog
 *
 * Return: rien (void)
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	if (d->age == NULL)
	{
		printf("Age: (nil)\n");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
