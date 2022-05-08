/*
 ============================================================================
 Name        : Assignment5_Ex5.c
 Author      : Ahmed
 Description : C Program to find area of a circle, passing arguments to macros.
 	 	 	   [Area of circle=Ttr2]
 ============================================================================
 */

#include<stdio.h>

#define PI 3.14
#define AREA(RADIUS) PI*(RADIUS)*(RADIUS)

int main()
{
	float radius;

	printf("Enter Radius:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&radius);

	printf("Area=%0.2f",AREA(radius));

	return 0;
}
