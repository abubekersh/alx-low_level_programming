#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog -func name
 * @name: parm
 * @age: parm2
 * @owner: parm3
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ne_dog;

	ne_dog = malloc(sizeof(dog_t));
	if (ne_dog == NULL)
	{
		return (NULL);
	}

	ne_dog->name = (name);
	ne_dog->age = age;
	ne_dog->owner = (owner);
	return (ne_dog);
}
