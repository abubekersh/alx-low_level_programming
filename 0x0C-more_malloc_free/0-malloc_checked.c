#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory of size b or exit(98)
 * @b: size
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
