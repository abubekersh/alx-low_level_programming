#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocate memory of the given address
 * @ptr: the address of the old memory
 * @old_size: the size of the old allocated memory
 * @new_size: the new allocated memory
 * Return: a void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	unsigned int i;

	unsigned int copy;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	else
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		copy = (new_size < old_size) ? new_size : old_size;

		for (i = 0; i < copy; i++)
		{
			new_ptr[i] = ((char *) ptr)[i];
		}
	}
	free(ptr);
	return ((void *) new_ptr);
}
