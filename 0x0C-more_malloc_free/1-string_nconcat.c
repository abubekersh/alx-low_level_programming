#include <stdlib.h>
#include "main.h"

/**
 * _strlen - return the length of the string
 * @str: the string
 * Return: int
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - concatenate s2 into s1 upto s2[n]
 * @s1: string
 * @s2: string
 * @n: upto
 * Return: new allocated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	unsigned int i;

	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	p = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	j = i;
	for (i = 0; i < n && s2[i] != '\0'; i++, j++)
	{
		p[j] = s2[i];
	}
	p[j] = '\0';
	return (p);
}
