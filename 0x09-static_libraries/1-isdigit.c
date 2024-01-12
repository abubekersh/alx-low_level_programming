#include "main.h"

/**
 * _isdigit - check if a char is a digit from 0 to 9
 * @c: char
 * Return: int
 */
int _isdigit(int c)
{
	int result;

	if (c >= 48 && c <= 57)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
