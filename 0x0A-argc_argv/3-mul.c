#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: the arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num1;

	int num2;

	int product;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);

		num2 = atoi(argv[2]);

		product = num1 * num2;
		printf("%d\n", product);
	}
	return (0);
}
