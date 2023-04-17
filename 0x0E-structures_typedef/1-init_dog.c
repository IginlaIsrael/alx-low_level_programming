#include <stdio.h>
#include "dog.h"
#include <stdlib.h>


/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: A numbers index
 * @name: A variable of names
 * @age: A variable of ages
 * @owner: A variable of onwers
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		(d = malloc(sizeof(struct dog)));
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
