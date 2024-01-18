#include <stdlib.h>
#include "main.h"

/**
 * array_range - range from min to max
 * @min: the min value
 * @max: the max value
 * Return: int
 */
int *array_range(int min, int max)
{
	int *p;

	int i;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
