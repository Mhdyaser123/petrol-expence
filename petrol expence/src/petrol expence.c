/*
 ============================================================================
 Name        : petrol.c
 Author      : Mohammed Yaser
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,c,t;
	setbuf(stdout,NULL);
	printf("total km");
	scanf("%f",&a);
	printf("mileage of vehicle");
	scanf("%f",&b);
	printf("cost of petrol");
	scanf("%f",&c);

	t=(a/b)*c;

	printf("total expense:%f",t);
	return EXIT_SUCCESS;
}
