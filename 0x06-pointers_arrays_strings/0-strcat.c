#include "main.h"

/**
 * _strcat - concatenate the given string into another
 * @dest: the string which append to
 * @src: the string which added
 * Return: char which is dest
 */
char *_strcat(char *dest, char *src)
{
	int length = 0;

	int i;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = length; *src != '\0'; i++)
	{
		dest[i] = *src;
		src++;
	}
	return (dest);
}
