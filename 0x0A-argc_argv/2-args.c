#include <stdio.h>

/**
 * main - entry of the program
 * @argc: number of arguments
 * @argv: the argumnets
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
