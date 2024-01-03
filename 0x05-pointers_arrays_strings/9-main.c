#include <stdio.h>
#include "main.h"

int main(void)
{
	char s[98];
	char *ptr;

	ptr = _strcpy(s, "why this good, is \n");
	printf("%s", s);
	printf("%s",ptr);
	return (0);
}
