#include "main.h"

/**
 *_strlen - calculates the string length of the given pointer
 *@s: given array of characters
 *Return: int
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
