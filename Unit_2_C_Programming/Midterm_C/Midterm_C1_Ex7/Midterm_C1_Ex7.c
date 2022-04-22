/*
 ============================================================================
 Name        : Midterm_C1_Ex5.c
 Author      : Ahmed
 Description : c function to sum numbers from 1 to 100(without loop)
 ============================================================================
 */

#include<stdio.h>

int Sum100(int num);

int main()
{
	printf("Sum Numbers from 1 to 100: %d",Sum100(100));
	return 0;
}

int Sum100(int num)
{
	// I used static to not initialize sum again each time i call it
	static int sum=0;

	if(num!=0)
		{
			sum+=num;
			Sum100(num-1);
		}
	return sum;
}
