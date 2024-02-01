#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return number of elements in the list
 * @h: head of the list
 * Return: size of the list
 */
size_t list_len(const list_t *h)
{
	size_t size;

	const list_t *itr;

	itr = h;
	size = 0;
	while (itr != NULL)
	{
		size++;
		itr = itr->next;
	}
	return (size);
}
