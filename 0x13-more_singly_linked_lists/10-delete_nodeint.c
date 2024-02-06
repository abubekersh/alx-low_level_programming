#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at given index
 * @head: head of the linked list
 * @index: index of the to be delted node
 * Return: 1 if succesful -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *itr;

	listint_t *previous;

	listint_t *next;

	unsigned int i;

	itr = *head;
	if (index == 0 && itr != NULL)
	{
		next = itr->next;
		free(itr);
		*head = next;
		return (1);
	}
	for (i = 0; itr != NULL; i++)
	{
		if (i + 1 == index)
		{
			previous = itr;
			next = (itr->next)->next;
			free(itr->next);
			previous->next = next;
			return (1);
		}
		itr = itr->next;
	}
	return (-1);
}
