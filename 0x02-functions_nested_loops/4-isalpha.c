#include "main.h"

/**
 * _isalpha - print 1 if the character is an alphabetic character
 * @c: character to check
 * Return: int
 */
int _isalpha(int c)
{
	int r;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		r = 1;
	else
		r = 0;
	return (r);
}

