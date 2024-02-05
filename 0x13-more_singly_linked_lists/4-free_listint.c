#include "lists.h"

/**
 * free_listint - free the memoery assigned by add
 * @head: head of the linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *itr;

	listint_t *temp;

	itr = head;
	while (itr != NULL)
	{
		temp = itr->next;
		free(itr);
		itr = temp;
	}
}
