#include <stdio.h>
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
	
	d = malloc(sizeof(dog_t));
	if (d ==NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
