#include "main.h"

/**
 * factorial - returns the factorial of n
 * @n: the number to get the factorial of
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
