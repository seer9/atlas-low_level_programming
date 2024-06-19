#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
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
