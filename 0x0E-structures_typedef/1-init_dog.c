#include "dog.h"
#include "main.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type dog
 * @d: Holds the struct data
 * @name: Holds  the name data
 * @age: Holds the age data
 * @owner: Holds the owner data
 *
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
