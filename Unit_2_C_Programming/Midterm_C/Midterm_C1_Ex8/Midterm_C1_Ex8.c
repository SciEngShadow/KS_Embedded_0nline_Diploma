/*
 ============================================================================
 Name        : Midterm_C1_Ex6.c
 Author      : Ahmed
 Description : c function to take an array and revers its elements
 	 	 	   test case 1: input: int a[5]={1,2,3,4,5}; output:5 4 3 2 1
 ============================================================================
 */

#include<stdio.h>

void reverse(int size,int arr[]);

int main()
{
	int size=1,i,j;
	int arr[size];

	//Getting Array Size
	printf("Enter Array Size:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);

	//Getting Array Elements
	for(i=0;i<size;i++)
	{
		printf("Enter a[%d]:",i);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}

	//Prnting Array Elements
	printf("a[%d]={",size);
	for(j=0;j<size;j++)
	{
		fflush(stdin);fflush(stdout);
		if(j==size-1)
			printf("%d}\n",arr[j]);
		else
			printf("%d,",arr[j]);
	}

	reverse(size,arr);


	return 0;

}

void reverse(int size,int arr[])
{
	int i,j,k;
	int rev_arr[size];
	for(j=size-1,i=0;i<size;j--,i++)
	{
			rev_arr[j]=arr[i];
	}

	printf("Reversed[%d]={",size);
	for(k=0;k<size;k++)
	{
		if(k==size-1)
			printf("%d}\n",rev_arr[k]);
		else
			printf("%d,",rev_arr[k]);
	}

}
