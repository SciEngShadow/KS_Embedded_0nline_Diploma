/*
 ============================================================================
 Name        : Assignment1_Ex2.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Check Wether The Num is Even OR Odd
 ============================================================================
 */

#include<stdio.h>

int main()
{
	int Entered_Num;

	printf("Enter an Integer Number You Want to Check: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Entered_Num);

	if((Entered_Num%2)==0)
	{
		printf("Your Number: %d is Even",Entered_Num);
	}
	else
	{
		printf("Your Number: %d is Odd",Entered_Num);
	}

	return 0;
}

