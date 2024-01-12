#include "main.h"

/**
 * _strncpy - copy the string in src to dest upto n
 * @dest: string which stores the ncopy
 * @src: the string which get copied
 * @n: the size in which src get copied
 * Return:  char which is dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
