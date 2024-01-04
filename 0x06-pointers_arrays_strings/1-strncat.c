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
	int  srclength = 0;

	int destlength = 0;

	int i;

	while (dest[destlength] != '\0')
	{
		destlength++;
	}
	for (i = destlength; srclength < n; i++)
	{
		dest[destlength] = src[srclength];
		srclength++;
	}
	return (dest);
}

