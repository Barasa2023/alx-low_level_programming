#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a dog struct variable
 * @d: struct dog
 * @name: name of dog
 * @age: age
 * @owner: owner of dog
 *
 * return: void
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
