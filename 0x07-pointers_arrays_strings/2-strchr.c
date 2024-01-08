#include "main.h"

/**
 * _strchr - return a pointer to the given char in the string
 * @s: the given string
 * @c: the character to be found in the string
 * Return: pointer to the c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
