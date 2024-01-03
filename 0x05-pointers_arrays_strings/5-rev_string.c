#include "main.h"

/**
 * rev_string - reverse a given string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;

	int i;

	int j;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1, j = 0; j < i; i--, j++)
	{
		char tmp = s[j];

		s[j] = s[i];
		s[i] = tmp;
	}
}
