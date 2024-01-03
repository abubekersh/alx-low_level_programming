#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: the given string
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length >= 1)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar(10);
}
