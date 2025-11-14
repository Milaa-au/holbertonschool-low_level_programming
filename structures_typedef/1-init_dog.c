#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - definition de ma strucutre
 * @name: nom du chien
 * @age: age du chien
 * @owner: proprio
 * @d: p
 *
 * Return:
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
