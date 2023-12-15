#include <stdio.h>

/**
 * main - entry point of the program
 * Return: zero
 */
int main(void)
{
	int i = 48;

	while (i < 58)
		putchar(i++);
	i = 97;
	while (i < 103)
		putchar(i++);
	putchar(10);
	return (0);
}
