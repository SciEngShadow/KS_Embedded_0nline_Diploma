/*
 ============================================================================
 Name        : Assignment4_Ex3.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Reverse a Sentence using Recursion
 ============================================================================
 */

#include<stdio.h>
#include<string.h>

void Reverse();

int main()
{
	//Setting_Buffer_to_Null
	setbuf(stdout,NULL);
	setbuf(stderr,NULL);

	printf("Enter a Sentence: ");
	Reverse();
	return 0;

}

void Reverse()
{
	char c;
	scanf("%c",&c);

	if(c!='\n')
	{
		Reverse();
		printf("%c",c);
	}
}
