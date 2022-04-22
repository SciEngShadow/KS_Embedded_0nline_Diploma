/*
 ============================================================================
 Name        : Midterm_C1_Ex5.c
 Author      : Ahmed
 Description : c function to count number of ones in binary number?
 	 	 	   test case 1: input:5 ->output: 2 --->binary of 5 is 0101 so has 2 one's
 	 	 	   test case 2: input:15 ->output:4.
 ============================================================================
 */

#include<stdio.h>

int OnesInBinary(unsigned char num);
void print_binary(unsigned char num);

int main()
{
	unsigned int num;

	printf("Enter Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	printf("Number in binary:");
	print_binary(num);
	printf("\nNumber of Ones:%d",OnesInBinary(num));

	return 0;
}

int OnesInBinary(unsigned char num)
{
	char bits_num,i,count=0;
	bits_num=sizeof(num)*8;

	for(i=0;i<bits_num;i++)
	{
		if((num<<i)&0x80)
			count++;
	}
	return count;
}

void print_binary(unsigned char num)
{
	int Bits_Num=sizeof(num)*8,i;
	unsigned char mask=0x80;

	for(i=0;i<Bits_Num;i++)
	{
		if( (num<<i) & mask)
			printf("1");
		else
			printf("0");

	}
}

