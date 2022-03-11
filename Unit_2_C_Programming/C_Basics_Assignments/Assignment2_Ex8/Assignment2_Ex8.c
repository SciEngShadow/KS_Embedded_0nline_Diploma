/*
 ============================================================================
 Name        : Assignment2_Ex8.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program as a Calculator
 ============================================================================
 */
#include<stdio.h>

int main()
{
	float Num1,Num2;
	char Sign;

	printf("Enter your Two Numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f%f",&Num1,&Num2);

	printf("Enter the Sign of Your Operation: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&Sign);

	switch(Sign)
	{

		case '+':{printf("%f + %f = %f",Num1,Num2,Num1+Num2); break;}
		case '-':{printf("%f - %f = %f",Num1,Num2,Num1-Num2); break;}
		case '*':{printf("%f * %f = %f",Num1,Num2,Num1*Num2); break;}
		case '/':{
			if(Num2==0)
			{
				printf("Error!!! Division By Zero");
			}
			else
			{
				printf("%f / %f = %f",Num1,Num2,Num1/Num2);
				break;
			}

		}

	}
	return 0;
}
