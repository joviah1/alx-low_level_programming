#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: None
 *
 * Description: This function initializes a struct dog with the provided values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL && name != NULL && owner != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

