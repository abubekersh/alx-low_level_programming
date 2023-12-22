#include "main.h"

/**
* print_square - print squares followed by newline
* @n: square size
* Return: void
*/
void print_square(int n)
{
	int i = 0;

	int j = 0;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		while (i < n)
		{
			while (j < n)
			{
				_putchar(35);
				j++;
			}
			_putchar(10);
			i++;
		}
	}
}

