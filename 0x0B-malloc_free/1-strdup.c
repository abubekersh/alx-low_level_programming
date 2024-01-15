#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates the value of str into another
 * @str: the given string
 * Return: pointer to the newly allocated string
 */
char *_strdup(char *str)
{
	int size;

	char *new_string;

	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	size = 0;

	while (str[size] != '\0')
	{
		size++;
	}
	new_string = malloc(size * sizeof(char) + 1);
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_string[i] = str[i];
	}
	new_string[i] = '\0';
	return (new_string);
}
