/*
 ============================================================================
 Name        : Assignment4_Ex4.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Calculate Power using Recursion
 ============================================================================
 */

#include<stdio.h>
#include<string.h>


int main()
{
	//Setting_Buffer_to_Null
	setbuf(stdout,NULL);
	setbuf(stderr,NULL);

	int BaseNumber, PowerNumber;
	printf("Enter Base Number: ");
	scanf("%d",&BaseNumber);
	printf("Enter Power: ");
	scanf("%d",&PowerNumber);
	printf("%d ^ %d = %d",BaseNumber,PowerNumber,Power(BaseNumber,PowerNumber));
	return 0;
}

int Power(int Base, int Pow)
{
	if(Pow!=0)
		return Base*Power(Base,Pow-1);
	else
		return 1;
}
