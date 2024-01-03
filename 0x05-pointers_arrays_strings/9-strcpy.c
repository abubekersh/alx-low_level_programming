#include "main.h"

/**
 * _strcpy - copy a given array into another
 * @dest: string to be copied into
 * @src: string that get copied
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;

	int i;

	while (src[length] != '\0')
	{
		length++;
	}
	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

