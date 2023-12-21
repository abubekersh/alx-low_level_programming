#include "main.h"

/**
 * _isupper - check if a char is in upper case
 * @c: char
 * Return: int
 */
int _isupper(int c)
{
	int result;

	if (c >= 65 && c <= 90)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
