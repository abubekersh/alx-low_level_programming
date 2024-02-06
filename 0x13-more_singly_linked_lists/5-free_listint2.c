#include "lists.h"

/**
 * free_listint2 - free the memory allocated by add and make head null
 * @head: head of the linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *itr;

	listint_t *temp;

	itr = *head;
	if (*head == NULL || head == NULL)
		return;
	while (itr != NULL)
	{
		temp = itr->next;
		free(itr);
		itr = temp;
	}
	*head = NULL;
}
