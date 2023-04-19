#include "dog.h"
/**
 * free_dog - Frees a dog structure.
 * @d: Pointer to the dog structure to free.
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
