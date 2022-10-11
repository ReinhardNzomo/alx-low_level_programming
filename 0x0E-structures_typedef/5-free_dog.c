#include "dog.h"

/**
* free_dog - free dog
* @d: dog to be freed
* Return: 0
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
