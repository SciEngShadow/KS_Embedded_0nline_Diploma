/*
 ============================================================================
 Name        : Assignment1_Ex2.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Find ASCII Value of a Character
 ============================================================================
 */

#include<stdio.h>

int main()
{
	char Entered_Char;
	printf("Enter Your Character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&Entered_Char);
	printf("ASCII Value of %c: %d",Entered_Char,Entered_Char);
	return 0;
}
