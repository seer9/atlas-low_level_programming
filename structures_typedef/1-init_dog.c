#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - create a variable of type dog.
 *
 * @d: passing structure at the function.
 * @name: store a string for the name.
 * @age: stores a float for the age.
 * @owner: store a string for the owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
