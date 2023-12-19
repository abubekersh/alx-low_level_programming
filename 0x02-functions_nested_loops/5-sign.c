#include "main.h"

/**
 * print_sign - print the sign of the given character
 * @n: the character being checked
 * Return: int
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar(43);
	}
	else if (n < 0)
	{
		result = -1;
		_putchar(45);
	}
	else
	{
		result = 0;
		_putchar(48);
	}
	return (result);
}

