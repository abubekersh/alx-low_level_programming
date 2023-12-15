#include <stdio.h>

/**
 * main - entry point of the program
 * Return: zero
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i++);
		if (i == 58)
			continue;
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);
}
