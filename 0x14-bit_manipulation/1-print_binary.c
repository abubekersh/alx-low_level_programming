#include <stdio.h>
#include "main.h"

/**
 * print_binary - print the binary of the given unsigned int
 * @n: the decimal number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div;
	unsigned long int i;

	div = 0;
	i = n;
	while (i >= 2)
	{
		i = i - 2;
		div++;
	}
	if (div > 0)
	{
		print_binary(div);
	}
	putchar(i + '0');
}
