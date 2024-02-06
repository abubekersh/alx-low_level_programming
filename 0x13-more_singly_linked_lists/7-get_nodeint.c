#include "lists.h"

/**
 * get_nodeint_at_index - print the node at given index
 * @head: first node
 * @index: index of the node
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *itr;

	unsigned int i;

	itr = head;
	for (i = 0; itr != NULL; i++)
	{
		if (i == index)
			return (itr);
		itr = itr->next;
	}
	return (NULL);
}
