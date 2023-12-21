#include "main.h"

/**
 * print_most_numbers - print from 0 to 9
 * Return: void
 */
void print_most_numbers(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		if (n == 50 || n == 52)
		{
			n++;
			continue;
		}
		_putchar(n++);
	}
	_putchar(10);
}
