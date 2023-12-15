#include <stdio.h>

/**
 * main - entry point of the programm
 * Return: zero
 */
int main(void)
{
	int ch = 122;

	while (ch >= 97)
		putchar(ch--);
	putchar(10);
	return (0);
}
