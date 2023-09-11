#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - signs new dog data type variables to values of arguments
 * @d: pointer holds address of struct
 * @name: name of dog owner
 * @age: how old the dog is
 * @owner: name of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
