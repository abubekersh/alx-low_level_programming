#include "main.h"

/**
 * _memset - fillls the values in memory with a given byte
 * @s: the given memory block
 * @b: the char which fills the memory
 * @n: the amount of block to be filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
