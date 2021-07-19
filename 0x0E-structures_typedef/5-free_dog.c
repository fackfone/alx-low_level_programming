#include <stdio.h>
#include "dog.h"

/**
 * free_dog - Frees elements of type struct dog
 * @d: First argument (pointer to a structure)
 * Return: NOTHING
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	else
		return;
}
