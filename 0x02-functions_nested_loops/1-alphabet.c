#include "main.h"

/**
 * print_alphabet - prints the alphabets in lower case
 * Return: has a void return type
 */
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a++);
	}
	_putchar(10);
}
