#include "dog.h"

/**
* new_dog - new dog
* @name: dog name
* @age: age of dog
* @owner: owner of dog
* Return: dog
*/

dog_t *new_dog(char *name float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
