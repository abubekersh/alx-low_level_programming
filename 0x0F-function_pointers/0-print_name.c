#include "function_pointers.h"

/**
 * print_name - print the name using the function given
 * @name: the parameter
 * @f: the callback function
 * Ruturn: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
