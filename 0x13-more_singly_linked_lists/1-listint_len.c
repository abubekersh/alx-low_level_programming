#include "lists.h"

/**
 * listint_len - length of the linked list
 * @h: the linked list
 * Return: the length
 */
size_t listint_len(const listint_t *h)
{
	size_t size;

	const listint_t *itr;

	itr = h;
	size = 0;
	while (itr != NULL)
	{
		size++;
		itr = itr->next;
	}
	return (size);
}
