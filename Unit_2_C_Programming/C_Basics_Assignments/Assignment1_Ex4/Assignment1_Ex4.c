/*
 ============================================================================
 Name        : Assignment1_Ex2.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Multiply two Floating Point Numbers
 ============================================================================
 */

#include<stdio.h>

int main()
{
	float Entered_Num1,Entered_Num2,Result;
	printf("Entered Your Two Numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&Entered_Num1,&Entered_Num2);
	Result= Entered_Num1*Entered_Num2;
	printf("Product: %f",Result);

	return 0;
}
