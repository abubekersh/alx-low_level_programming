#include "main.h"

/**
 * _puts - prints the given string without the \0
 * @str: the given string
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
