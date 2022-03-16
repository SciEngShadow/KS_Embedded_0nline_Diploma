/*
 ============================================================================
 Name        : Assignment3_Ex2.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Calculate the Average of a given Numbers
 ============================================================================
 */

#include<stdio.h>

int main()
{
	int Num_Of_Data;
	float Sum=0, Average;
	float Stored_Data[Num_Of_Data];

	printf("Enter The Number of Data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Num_Of_Data);

	for(int i=0;i<Num_Of_Data;i++)
	{
		printf("%d. Enter Number: ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&Stored_Data[i]);
		Sum+=Stored_Data[i];
	}
	Average=Sum/Num_Of_Data;
	printf("Average = %0.2f",Average);

	return 0;
}
