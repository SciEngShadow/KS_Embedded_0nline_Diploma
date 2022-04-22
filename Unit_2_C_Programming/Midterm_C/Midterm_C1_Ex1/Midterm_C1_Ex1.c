/*
 ============================================================================
 Name        : Midterm_C1_Ex1.c
 Author      : Ahmed
 Description : c function to take a number and sum all digits?
 	 	 	   test case 1: input:123 ->output:6
 	 	 	   test case 2: input:4565 ->output:20
 ============================================================================
 */
#include<stdio.h>

int DigitsSum(int num);

int main()
{
	int num,sum;

	printf("Enter Your Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	sum=DigitsSum(num);

	printf("Input:%d -> Output:%d",num,sum);

	return 0;

}

int DigitsSum(int num)
{
	int rem,sum=0;
	while(num!=0)
	{
		rem=num%10;
		num/=10;
		sum+=rem;
	}

	return sum;
}
