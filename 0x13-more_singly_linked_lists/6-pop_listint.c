#include "lists.h"

/**
 * pop_listint - remove the first node and return its value
 * @head: head of the linked list
 * Return: value of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	int pop_val;

	if (*head == NULL)
		return (0);
	temp = (*head)->next;
	pop_val = (*head)->n;
	free(*head);
	*head = temp;
	return (pop_val);
}
