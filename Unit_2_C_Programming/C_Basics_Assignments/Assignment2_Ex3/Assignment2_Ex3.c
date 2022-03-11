/*
 ============================================================================
 Name        : Assignment2_Ex3.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Find the Largest Number among Three Numbers Entered By a User
 ============================================================================
 */

#include<stdio.h>

int main()
{
	float Num1,Num2,Num3;

	printf("Enter Three Numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f%f%f",&Num1,&Num2,&Num3);

	if(Num1>Num2)
	{
		if(Num1>Num3)
		{
			printf("%.3f is the Largest.",Num1);
		}
	}
	else
	{
		if(Num2>Num3)
		{
			printf("%.3f is the Laregst.",Num2);
		}
		else
		{
			printf("%.3f is the Laregst.",Num3);
		}
	}

	return 0;
}


