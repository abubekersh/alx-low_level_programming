#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum the diven number of args
 * @n: number of args passed
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;

	unsigned int i;

	int sum;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
