#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a dog struct
 * @d: pointer to dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = _strdup(name);
		d->age = age;
		d->owner = _strdup(owner);
	}
}
/**
 * print_dog - create a variable of type dog
 * @d: passes the struct dog to the function
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
