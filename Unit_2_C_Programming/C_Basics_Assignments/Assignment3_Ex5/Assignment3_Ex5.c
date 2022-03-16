/*
 ============================================================================
 Name        : Assignment3_Ex4.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program To Search for an Element in the Array
 ============================================================================
 */

#include<stdio.h>

int main()
{
	int NumOfElements,i,Searched_Element;
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

//Entering the element to be searched
	printf("\nEnter the Element to be Searched: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Searched_Element);

// Searching the element
	for(i=0;i<NumOfElements;i++)
	{
		if(Searched_Element==ArrayElements[i])
		{
			printf("Number is Found at Location : %d",i+1);
			break;
		}
		else
		{
			printf("Number is not Found");
			break;
		}
	}
	return 0;

}

