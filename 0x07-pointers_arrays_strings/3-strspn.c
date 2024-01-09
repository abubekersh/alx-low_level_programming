#include "main.h"

/**
 * _strspn - check how many of the charcters present in s are there in accept
 * @s: string
 * @accept: string
 * Return: unsigned int
 */
unsigned int _strspn(const char *s, const char *accept)
{
	int i;

	int j;

	unsigned int count = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}
