/*
 ============================================================================
 Name        : Assignment2_Ex5.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to check wether the charachter is an alphabet or not
 ============================================================================
 */
#include<stdio.h>

int main()
{
	char Entered_Char;

	printf("Enter your Charachter: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&Entered_Char);

	if((Entered_Char>=65&&Entered_Char<=90)||(Entered_Char>=97&&Entered_Char<=122))
	{
		printf("%c is an Alphabet",Entered_Char);
	}
	else
	{
		printf("%c isn't an Alphabet",Entered_Char);
	}

	return 0;
}


