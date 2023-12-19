#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the digit
 * Return: int
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
		l = l * -1;
	_putchar('0' + l);
	return (l);
}
