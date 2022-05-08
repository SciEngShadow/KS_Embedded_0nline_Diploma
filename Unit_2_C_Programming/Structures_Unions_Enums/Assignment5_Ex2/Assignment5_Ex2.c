/*
 ============================================================================
 Name        : Assignment5_Ex2.c
 Author      : Ahmed
 Description : C Program to Add Two Distances (in inch-feet) System Using Structures
 ============================================================================
 */

#include<stdio.h>

struct Distance
{
	int feet;
	float inch;
};

int main()
{
	struct Distance d1,d2;
	float inches_total;
	int feets_total;

	printf("Enter Info of First Distance:\n");
	printf("Enter Feet:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&d1.feet);
	printf("Enter Inch:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d1.inch);

	printf("\nEnter Info of Second Distance:\n");
	printf("Enter Feet:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&d2.feet);
	printf("Enter Inch:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d2.inch);

	inches_total=d1.inch+d2.inch;
	feets_total=d1.feet+d2.feet;

	if(inches_total>12)
	{
		feets_total++;
		inches_total-=12;
	}
	printf("\nSum of distances=%d\' -%0.1f\"",feets_total,inches_total);


	return 0;
}
