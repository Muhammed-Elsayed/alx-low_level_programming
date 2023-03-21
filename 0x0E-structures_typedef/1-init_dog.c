#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - function that initialize a variable of type struct dog .
 *@d: pt .
 *@name: name .
 *@age: the age .
 *@owner: the owner of the dog .
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
