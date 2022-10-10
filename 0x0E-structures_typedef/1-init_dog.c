#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - assigns value to the variables
 * @d: pointer that points to the struct dog
 * @name: name value
 * @age: age value
 * @owner: owner name valu
 * Return - nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Passing to stucture from main */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
