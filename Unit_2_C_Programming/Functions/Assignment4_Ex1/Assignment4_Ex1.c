/*
 ============================================================================
 Name        : Assignment4_Ex1.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to find a prime number between two intervals
 ============================================================================
 */

#include<stdio.h>
#include<string.h>

int Prime_Num(int Check_Num);

int main()
{
	//Setting_Buffer_to_Null
	setbuf(stdout,NULL);
	setbuf(stderr,NULL);

	int Low_Num, High_Num, Check_Num;
	printf("Enter Two Numbers (Intervals): ");
	scanf("%d%d",&Low_Num,&High_Num);
	printf("Prime Numbers between %d and %d are: ",Low_Num,High_Num);
	for(int i=Low_Num;i<=High_Num;i++)
	{
		Check_Num=Prime_Num(i);
		if(Check_Num==0)
			printf("%d ",i);
	}
	return 0;
}

int Prime_Num(int Num)
{
	int Check_Num=0;
	for(int i=2;i<=Num/2;i++)
	{
		if((Num%i==0))
		{
			Check_Num = 1;
			break;
		}
	}
	return Check_Num;
}
