#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocate two dimentional array
 * @width: number of columns
 * @height: number of rows
 * Return: two dimenstional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i;

	int j;

	int **p;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	p = malloc(height * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
