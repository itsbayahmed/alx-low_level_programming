#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A function that frees all the memory
 *      allocated for the given dog_t struct.
 *
 * @d: A pointer to th dog_t struct to be freed.
 *
 * Return: Nothing (void)
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}

