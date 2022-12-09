#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (succcess)
 */
int main(void)
{
	int c, f;

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);
	for (f = 'A' ; f <= 'Z' ; f++)
		putchar(f);
	putchar('\n');
	return (0);
}
