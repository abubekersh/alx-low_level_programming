#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - func name
 * @d: parm
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
