#include "main.h"

/**
 * _islower - print 1 if the character is in lower case
 * @c: character to check
 * Return: int
 */
int _islower(int c)
{
	int r;

	if (c >= 97 && c <= 122)
		r = 1;
	else
		r = 0;
	return (r);
}

