#include "main.h"

/**
 * _memcpy - copy the byte in src to dest upto n
 * @dest: the memory which get copied to
 * @src: the source of the byte
 * @n: the size in upto which the byte is copied
 * Return: char which is dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
