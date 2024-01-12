#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: the arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	int i;

	int j;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (isalpha(argv[i][j]) != 0)
				{
					printf("%s\n", "Error");
					return (1);
				}
			}
			sum = sum +  atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}


