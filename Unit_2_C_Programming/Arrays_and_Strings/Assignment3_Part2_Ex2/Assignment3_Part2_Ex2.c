/*
 ============================================================================
 Name        : Assignment3_Par2_Ex2.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program To Find the length a String
 ============================================================================
 */

#include<stdio.h>

int main()
{
	char EnteredString[100];
	int i,Counter=0;

//Entering string from user
	printf("Enter a String: ");
	fflush(stdin);fflush(stdout);
	gets(EnteredString);


// Finding Length
	for(i=0;(i<EnteredString[i])!='\0';i++)
			Counter++;

	printf("Length of String = %d",Counter);

	return 0;
}
