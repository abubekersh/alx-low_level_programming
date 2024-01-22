#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function name
 * @d: struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
		if (d->age == 0.0)
		{
			printf("Name: %s\nAge: %s\nOwner: %s\n", d->name, "(nil)", d->owner);
		}
		else
		{
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
		}
	}
}
