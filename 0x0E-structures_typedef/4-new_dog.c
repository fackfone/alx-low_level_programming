#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Create a new dog of type struct dog
 * @name: First argument (name of the dog)
 * @age: Second argument (age of the dog)
 * @owner: Third argument (owner of the dog)
 * Return: NOTHING
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(struct dog));
	if (d != NULL)
	{
		d->name = strdup(name);
		if (d->name == NULL)
		{
			return (NULL);
		}
		d->owner = strdup(owner);
		if (d->owner == NULL)
		{
			return (NULL);
		}
		d->age = age;
		return (d);
	}
	else
	{
		return (NULL);
	}
}
