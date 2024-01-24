#include "function_pointers.h"

/**
 * array_iterator - call a function on every element of the arrray
 * @array: the array
 * @size: size of the array
 * @action: the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i  = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
