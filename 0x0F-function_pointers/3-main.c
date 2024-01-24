#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point of the program
 * @argc: size of the argument
 * @argv: array containing the arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc;

	char operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = *argv[2];
	if (operator != '+' && operator != '-' &&
	operator != '/' && operator != '*' && operator != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	calc = get_op_func(argv[2])(num1, num2);
	printf("%d\n", calc);
	return (0);
}
