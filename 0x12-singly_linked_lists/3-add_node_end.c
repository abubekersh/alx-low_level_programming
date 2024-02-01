#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node to the end of the list
 * @head: a pointer to the head of the list
 * @str: the string to be added to the list
 * Return: the address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	list_t *itr;

	itr = *head;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (itr->next != NULL)
			itr = itr->next;
		itr->next = new_node;
	}
	return (new_node);
}
