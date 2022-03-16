/*
 ============================================================================
 Name        : Assignment3_Ex1.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to find sum of 2x2 matrices
 ============================================================================
 */

#include<stdio.h>

int main()
{
	float Matrix1[2][2],Matrix2[2][2],Sum[2][2];

	printf("Enter the Elements of 1st Matrix:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Enter the Element %d%d: ",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f",&Matrix1[i][j]);
		}
	}

	//////////////////////////////////////////////////

	printf("Enter the Elements of 2nd Matrix:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Enter the Element %d%d: ",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f",&Matrix2[i][j]);
		}
	}

	//////////////////////////////////////////////////

	printf("Sum of the Two Matrices:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			Sum[i][j]=Matrix1[i][j]+Matrix2[i][j];
			printf("%.2f\t",Sum[i][j]);
		}
		printf("\n");
	}

    ///////////////////////////////////////////////////


	return 0;
}
