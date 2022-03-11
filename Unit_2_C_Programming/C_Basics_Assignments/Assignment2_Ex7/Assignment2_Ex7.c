/*
 ============================================================================
 Name        : Assignment2_Ex7.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to calculate the factorial of a number
 ============================================================================
 */
#include<stdio.h>

int main()
{
	unsigned long long int Factorial=1;
	int Entered_Num,i;

	printf("Enter your Number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Entered_Num);

	if(Entered_Num>0)
	{
		for( i=1 ; i<=Entered_Num ; i++)
		{
			Factorial*= i;
		}
		printf("The Factorial of %d: %lu",Entered_Num,Factorial);
	}
	else
	{
		printf("ERROR!!! Factorial of a Negative Number isn't Existed");
	}

	return 0;
}

