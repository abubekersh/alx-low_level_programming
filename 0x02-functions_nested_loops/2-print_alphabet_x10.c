#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lower case
 * Return: has a void return type
 */
void print_alphabet_x10(void)
{
	int a;

	int b = 0;

	while (b++ < 10)
	{	a = 97;
		while (a <= 122)
		{
			_putchar(a++);
		}
		_putchar(10);
	}
}
