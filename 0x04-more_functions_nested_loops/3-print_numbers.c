#include "main.h"

/**
 * print_numbers - print from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		_putchar(n++);
	}
	_putchar(10);
}