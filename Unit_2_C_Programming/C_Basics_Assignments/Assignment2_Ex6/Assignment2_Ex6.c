/*
 ============================================================================
 Name        : Assignment2_Ex6.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to calculate the sum of natural numbers
 ============================================================================
 */
#include<stdio.h>

int main()
{
	int Entered_Num;
	int Sum=0;

	printf("Enter your Natural Number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Entered_Num);

	for(int i=1 ; i<=Entered_Num ; i++)
	{
		Sum += i;
	}

	printf("Sum = %d",Sum);

	return 0;


}
