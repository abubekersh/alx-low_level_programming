#include "main.h"

/**
 * puts_half - prints the string from the half
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;

	int start;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2;
	}
	while (start < length)
	{
		_putchar(str[start]);
		start++;
	}
	_putchar(10);
}
