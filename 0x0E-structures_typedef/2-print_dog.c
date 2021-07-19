#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Printthe variables of struct dog
 * @d: First argument (pointer to a structure);
 * Return: NOTHING
 */

void print_dog(struct dog *d)
{
	if(d->name == NULL)
	{
		d->name = "(nil)";
	}
	if(d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	if(!(d->age))
	{
		d->owner = "(nil)";
	}
	if(d == NULL)
	{
		exit(1);
	}
	printf("Name: %s\n", d->name);
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
