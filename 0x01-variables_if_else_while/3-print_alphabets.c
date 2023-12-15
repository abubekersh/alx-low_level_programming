#include <stdio.h>

/**
 * main - entry point of the programm
 * Return: zero
 */
int main(void)
{
	int ch = 97;

	while (ch <= 122)
		putchar(ch++);
	ch = 65;
	while (ch <= 90)
		putchar(ch++);
	putchar(10);
	return (0);
}
