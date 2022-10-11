#include "dog.h"
#include <string.h>
/**
* new_dog - new dog
* @name: dog name
* @age: age of dog
* @owner: owner of dog
* Return: dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = strcpy(d->name, name);
	d->age = age;
	d->owner = strcpy(d->owner, owner);

	return (d);
}
