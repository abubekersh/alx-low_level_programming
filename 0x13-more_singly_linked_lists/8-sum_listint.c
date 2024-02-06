#include "lists.h"

/**
 * sum_listint - sum all values of the nodes
 * @head: head of the linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *itr;

	int sum;

	itr = head;
	sum = 0;
	while (itr != NULL)
	{
		sum = sum + itr->n;
		itr = itr->next;
	}
	return (sum);
}
