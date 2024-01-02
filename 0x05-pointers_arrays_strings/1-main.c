#include<stdio.h>
#include "main.h"

int main(void){
	int a = 10;

	int b = 20;

	printf("a = %d , b = %d", a, b);

	swap_int(&a,&b);

	printf("a = %d , b = %d", a, b);

	return(0);
}
