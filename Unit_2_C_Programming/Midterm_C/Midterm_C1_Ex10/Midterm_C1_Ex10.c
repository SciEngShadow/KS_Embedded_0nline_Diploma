/*
 ============================================================================
 Name        : Midterm_C1_Ex10.c
 Author      : Ahmed
 Description : c function to count the max number of ones between two zeros?
			   test case 1: input:14(01110) output:3.
			   test case 2: input:110(0110 1110). output:3
 ============================================================================
 */

#include<stdio.h>

int main()
{
	int num;

	printf("Enter your Num:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	printf("Max Num of Ones:%d",MaxOnes(num));
}

int MaxOnes(int num)
{
	int count=0;
	for(count;num!=0;count++)
	{
		num&=(num<<1);
	}
	return count;
}
