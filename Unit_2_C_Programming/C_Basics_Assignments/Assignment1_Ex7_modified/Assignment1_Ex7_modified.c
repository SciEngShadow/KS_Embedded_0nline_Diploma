/*
 ============================================================================
 Name        : Assignment1_Ex2.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Swap Two Numbers without temp variable
 ============================================================================
 */

#include<stdio.h>

int main()
{
	float First_Entered_Num, Second_Entered_Num;

	printf("Enter Value 1: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&First_Entered_Num);

	printf("Enter Value 2: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&Second_Entered_Num);

	Second_Entered_Num = Second_Entered_Num + First_Entered_Num;
	First_Entered_Num = Second_Entered_Num - First_Entered_Num;
	Second_Entered_Num = Second_Entered_Num - First_Entered_Num;

	printf("After Swapping Value 1 : %.2f \nAfter Swapping Value 2 : %.1f",First_Entered_Num,Second_Entered_Num);

	return 0;

}
