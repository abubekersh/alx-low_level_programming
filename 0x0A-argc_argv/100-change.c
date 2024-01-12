#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: parametre
 * @argv: parameter
 * Return: int
 */
int main(int argc, char *argv[])
{
	int cents;

	int changes = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		changes += cents / 25;
		cents %= 25;

		changes += cents / 10;
		cents %=  10;

		changes += cents / 5;
		cents %=  5;

		changes += cents / 2;
		cents %= 2;

		changes += cents / 1;
		cents %= 1;

		printf("%d\n", changes);
	}
	return (0);
}
