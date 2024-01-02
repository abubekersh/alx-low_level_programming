#include "main.h"

/**
 *swap_int - swap two int
 *@a: first value
 *@b: second value
 *RETURN: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
