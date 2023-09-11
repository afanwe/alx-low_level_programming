#include "dog.h"
#include <stdib.h>

/**
 * free_dog - frees memory used by struct dog
 * @d: struct dog to free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
