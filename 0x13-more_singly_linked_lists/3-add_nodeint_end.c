#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: head of the linked list
 * @n: the value at the new_node
 * Return: the address of the new_node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	listint_t *itr;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	itr = *head;
	new_node->n = n;
	new_node->next = NULL;
	if (itr == NULL)
		*head = new_node;
	else
	{
		while (itr->next != NULL)
			itr = itr->next;
		itr->next = new_node;
	}
	return (new_node);
}
