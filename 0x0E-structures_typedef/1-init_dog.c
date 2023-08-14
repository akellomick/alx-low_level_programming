#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialises variable of type dog.
 * @d: dog d.
 * @name: dog name.
 * @age: dog age.
 * @owner dog : owner.
 *
 * Return: Void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
