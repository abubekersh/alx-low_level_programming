#include <stdio.h>

/**
 * main - entry point of the programm
 * Return: zero
 */
int main(void)
{
	int ch = 97;

	while (ch <= 122)
	{
		if (ch == 113 || ch == 101)
		{
			ch++;
			continue;
		}
		else
			putchar(ch++);
	}
	putchar(10);
	return (0);
}
