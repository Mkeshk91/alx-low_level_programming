#include "dog.h"

#include <stdlib.h>
/**
 * free_dog - frees allocated memory for struct dog.
 *
 * @d: struct dog to free memory.
 *
 */

void free_dog(dog_t *d)

{

	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
