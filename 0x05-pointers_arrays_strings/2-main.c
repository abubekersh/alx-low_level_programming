#include<stdio.h>
#include "main.h"

int main(void)
{
	char *s;

	int len;

	s = "my first strlen!";
	len = _strlen(s);
	printf("length of s = %d",len);
	return (0);
}
