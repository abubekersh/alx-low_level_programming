#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers separted by the given char
 * @separator: separate the numbers
 * @n: amount of the numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numbers;

	if (separator == NULL)
	{
		return;
	}
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

