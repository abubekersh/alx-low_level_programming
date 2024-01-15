#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatneate the content of s2 to s1
 * @s1: string
 * @s2: string
 * Return: s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	char *new_string;

	int i;

	int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	new_string = malloc(sizeof(s1) + sizeof(s2) - 4);
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		new_string[i] = s1[i];
	}
	j = i;
	for (i = 0; s2[i] != '\0'; i++, j++)
	{
		new_string[j] = s2[i];
	}
	new_string[j] = '\0';
	return (new_string);
}
