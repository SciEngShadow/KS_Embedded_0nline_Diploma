/*
 ============================================================================
 Name        : Assignment3_Par2_Ex1.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program To Find the Frequency of Character in a String
 ============================================================================
 */

#include<stdio.h>

int main()
{
	char EnteredString[100];
	char SearchedChar;
	int i,Counter=0;

//Entering string from user
	printf("Enter a String: ");
	fflush(stdin);fflush(stdout);
	gets(EnteredString);

// Entering the searched char
	printf("Enter a Character to Find Its Frequency: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&SearchedChar);

// Finding Frequency
	for(i=0;(i<EnteredString[i])!='\0';i++)
	{
		if(EnteredString[i]==SearchedChar)
		{
			Counter++;
		}

	}
	printf("Frequency of %c = %d",SearchedChar,Counter);

	return 0;
}
