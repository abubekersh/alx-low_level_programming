#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free the memory allocated to the list
 * @head: head of the linked list
 * @Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
