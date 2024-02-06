#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at given index
 * @head: head of the list
 * @idx: index to insert at
 * @n: value to insert
 * Return: the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *itr;

	listint_t *next;

	listint_t *new_node;

	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	itr = *head;
	if (idx == 0)
	{
		new_node->next = *head;
		*head= new_node;
	}
	for (i = 0; itr != NULL; i++)
	{
		if (i + 1 == idx)
		{
			next = itr->next;
			itr->next = new_node;
			new_node->next = next;
			return (new_node);
		}
		itr = itr->next;
	}
	return (NULL);
}
