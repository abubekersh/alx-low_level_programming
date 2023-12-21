#include "main.h"

/**
 * more_numbers - print form 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 15)
	{
		int n = 48;

		int j = 0;

		while (j <= 14)
		{
			if (j == 10)
			{
				n = 48;
			}
			if (j > 9)
			{
				_putchar(49);
			}
			_putchar(n++);
			j++;
		}
		_putchar(10);
		i++;
	}
}
