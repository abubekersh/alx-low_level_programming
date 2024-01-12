#include "main.h"

/**
 * _strpbrk - returns where the accept byte found in s
 * @s: the given string
 * @accept: the byte searched
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	int j;

	char *p;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				p = s + i;
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			break;
		}
	}
	return (p);
}
