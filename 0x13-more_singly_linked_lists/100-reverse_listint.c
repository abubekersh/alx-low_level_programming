#include "lists.h"

/**
 * reverse_listint - reverse the linked list
 * @head: head of the list
 * Return: the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;

	listint_t *prev;

	current = *head;
	if (current == NULL)
		return (current);
	while (*head != NULL)
	{
		*head = current->next;
		current->next = prev;
		prev = current;
		current = *head;
	}
	*head = prev;
	return (prev);
}
