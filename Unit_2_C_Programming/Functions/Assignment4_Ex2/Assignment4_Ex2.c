/*
 ============================================================================
 Name        : Assignment4_Ex2.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Calculate Factorial using Recursion
 ============================================================================
 */

#include<stdio.h>
#include<string.h>

int Factorial(int Fac);


int main()
{
	//Setting_Buffer_to_Null
	setbuf(stdout,NULL);
	setbuf(stderr,NULL);

	int num;
	printf("Enter a Positive Integer to Get Its Factorial: ");
	scanf("%d",&num);
	printf("Factorial of %d = %d",num,Factorial(num));

return 0;
}


int Factorial(int Fac)
{
	if(Fac!=1)
		return Fac*Factorial(Fac-1);
}
