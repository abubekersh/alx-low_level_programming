#include "main.h"

/**
 * _strlen_recursion - count the length of a string
 * @s: the given string
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
