#include "dog.h"
/**
 * free_dog - frees the memory allocated to dog and its elements
 * @d: the struct dog
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d)
}
