#include "dog.h"

/**
 * init_dog - initialize dog with the given values
 * @d: the struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;

	d->age = age;

	d->owner = owner;
}
