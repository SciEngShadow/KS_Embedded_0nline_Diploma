/*
 ============================================================================
 Name        : Assignment3_Par2_Ex3.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program To Reverse a string
 ============================================================================
 */

#include<stdio.h>
#include<string.h>

int main()
{
	char EnteredString[100];
	int i,j;

//Entering string from user
	printf("Enter a String: ");
	fflush(stdin);fflush(stdout);
	gets(EnteredString);
	char ReversedString[strlen(EnteredString)];

	for(i=0,j=(strlen(EnteredString));(EnteredString[i]!='\0');i++,j--)
	{
		ReversedString[j-1]=EnteredString[i];
	}
	ReversedString[strlen(EnteredString)]=0;

	printf("%s",ReversedString);

	return 0;
}
