#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * power_of - calculate x raised to n
 * @x: the base
 * @n: the power
 * Return: the answer
 */
unsigned int power_of(unsigned int x, unsigned int n)
{
	if (n == 0)
		return (1);
	return (x * power_of(x, --n));
}

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: string of 0 and 1
 * Return: the converted form
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i;
	unsigned int size;

	if (b == NULL)
		return (0);
	size = strlen(b) - 1;
	num = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		else if (b[i] == '1')
			num = num + (1 * power_of(2, size--));
		else if (b[i] == '0')
		{
			size--;
			continue;
		}
	}
	return (num);
}
