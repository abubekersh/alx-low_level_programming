#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print every thing
 * @format: format of the string
 * Return: void
 */
void print_all(const char *const format, ...)
{
	int i;

	char *str;

	va_list the_almighty;

	va_start(the_almighty, format);
	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(the_almighty, int));
				break;
			case 'i':
				printf("%d", va_arg(the_almighty, int));
				break;
			case 'f':
				printf("%f", va_arg(the_almighty, double));
				break;
			case 's':
				str = va_arg(the_almighty, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				else
				{
				       printf("%s", str);
				}
				break;
		}
		if ((format[i + 1] != '\0') && (format[i] == 'i' ||
		format[i] == 's' || format[i] == 'f' || format[i] == 'c'))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
