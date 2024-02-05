#include "lists.h"

/**
 * print_listint - print the int s in the linked list
 * @h: the linked list
 * Return: size of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t size;

	const listint_t *itr;

	itr = h;
	size = 0;
	while (itr != NULL)
	{
		printf("%d\n", itr->n);
		size++;
		itr = itr->next;
	}
	return (size);
}
