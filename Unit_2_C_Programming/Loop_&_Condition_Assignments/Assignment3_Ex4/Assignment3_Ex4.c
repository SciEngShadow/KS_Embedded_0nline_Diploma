/*
 ============================================================================
 Name        : Assignment3_Ex4.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program To insert an Element in the Array
 ============================================================================
 */

#include<stdio.h>

int main()
{
	int NumOfElements,i,NewElementLocation,NewElement;
	int ArrayElements[100];

	printf("Enter Num of Elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&NumOfElements);

// Inserting array elements
	for(i=0;i<NumOfElements;i++)
	{
		scanf("%d",&ArrayElements[i]);
	}

// Displaying elements
	for(i=0;i<NumOfElements;i++)
	{
		printf("%d ",ArrayElements[i]);
	}

//Entering the new element
	printf("\nEnter the Element to be inserted: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&NewElement);

// Determining element Location
	printf("Enter Element Location: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&NewElementLocation);

//Inserting new element
	NumOfElements++;
	for(i=NumOfElements;i>=NewElementLocation;i--)
	{
			ArrayElements[i]=ArrayElements[i-1];
	}
//	NumOfElements++;
	ArrayElements[NewElementLocation-1]=NewElement;

//Displaying the new elements
	for(i=0;i<NumOfElements;i++)
	{
		printf("%d",ArrayElements[i]);
	}
	return 0;
}
