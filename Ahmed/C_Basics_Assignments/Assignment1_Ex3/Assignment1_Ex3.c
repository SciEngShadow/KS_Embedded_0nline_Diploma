/*
 ============================================================================
 Name        : Assignment1_Ex2.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Add Two Integers
 ============================================================================
 */
#include<stdio.h>

int main()
{
	int Entered_Num1, Entered_Num2, Result;
	printf("Enter Your Two Integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&Entered_Num1,&Entered_Num2);
	Result = Entered_Num1 + Entered_Num2;
	printf("Sum = %d",Result);

	return 0;
}
