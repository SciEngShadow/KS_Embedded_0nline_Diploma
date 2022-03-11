/*
 ============================================================================
 Name        : Assignment2_Ex4.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Check Wether the Num is Postive or Negative or Zero
 ============================================================================
 */

#include<stdio.h>

int main()
{
	float Entered_Num;

	printf("Enter your Num: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&Entered_Num);

	if(Entered_Num>0)
	{
		printf("%f is Postive",Entered_Num);
	}
	else if(0==Entered_Num)
	{
		printf("%f is Zero",Entered_Num);
	}
	else
	{
		printf("%f is Negative",Entered_Num);
	}

	return 0;
}
