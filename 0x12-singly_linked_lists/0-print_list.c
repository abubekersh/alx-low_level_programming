#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print each element in the linked list
 * @h: the head of the list
 * Return: size of the linked list
 */
size_t print_list(const list_t *h)
{
	size_t size;
	const list_t *itr;

	size = 0;
	itr = h;
	while (itr != NULL)
	{
		if (itr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", itr->len, itr->str);
		itr = itr->next;
		size++;
	}
	return (size);
}
