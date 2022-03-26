/*
 ============================================================================
 Name        : Assignment1_Ex2.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Write Source Code to Swap Two Numbers
 ============================================================================
 */

#include<stdio.h>

int main()
{
	float First_Entered_Num, Second_Entered_Num, Swapper;

	printf("Enter Value 1: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&First_Entered_Num);

	printf("Enter Value 2: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&Second_Entered_Num);

	Swapper = First_Entered_Num;
	First_Entered_Num = Second_Entered_Num;
	Second_Entered_Num = Swapper;

	printf("After Swapping Value 1 : %.2f /n After Swapping Value 2 : %.1f",First_Entered_Num,Second_Entered_Num);

	return 0;

}
