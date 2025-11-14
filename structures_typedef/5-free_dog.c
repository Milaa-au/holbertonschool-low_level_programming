#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - On libere les chiens
 * @d: struct
 *
 * Return: rien (void)
 */

void free_dog(dog_t *d)
{
	if ( d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
