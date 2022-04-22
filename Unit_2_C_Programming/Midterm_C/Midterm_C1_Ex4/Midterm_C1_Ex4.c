/*
 ============================================================================
 Name        : Midterm_C1_Ex4.c
 Author      : Ahmed
 Description : c function to revers digits in number?
 	 	 	   test case 1: input:2457 ->output:7542 .
 	 	 	   test case 2: input:1057 ->output:7501.
 ============================================================================
 */
#include<stdio.h>

int reverse(int num);

int main()
{
	int num;
	printf("Enter Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	printf("Reversed:");
	reverse(num);

	return 0;
}

int reverse(int num)
{
	int rem=num%10;
	while(num!=0)
	{
		num/=10;
		printf("%d",rem);
		return reverse(num);
	}
}
