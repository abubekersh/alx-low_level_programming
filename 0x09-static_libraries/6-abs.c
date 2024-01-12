#include "main.h"

/**
 * _abs - compute absolute value of a number
 * @n: number to be computed
 * Return: int
 */
int _abs(int n)
{
	int abs;

	if (n >= 0)
		abs = n;
	else
		abs = -n;
	return (abs);
}
