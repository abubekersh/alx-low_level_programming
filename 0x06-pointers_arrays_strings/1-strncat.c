#include "main.h"

/**
 * _strncat - concatanate src to dest till n characters
 * @dest: string to be appended to
 * @src: string that is added
 * @n: how many charcters to append
 * Return: char which is dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlength = 0;

	int i;

	while (dest[destlength] != '\0')
	{
		destlength++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destlength] = src[i];
		destlength++;
	}
	dest[destlength + 1] = '\0';

	return (dest);
}

