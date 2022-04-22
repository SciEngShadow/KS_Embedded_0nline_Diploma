/*
 ============================================================================
 Name        : Midterm_C1_Ex2.c
 Author      : Ahmed
 Description : c function to print all prime numbers between two numbers?
 	 	 	   test case : input:n1=1,n2=20 ->output:1 2 3 5 7 11 13 17 19
 ============================================================================
 */
#include<stdio.h>

int PrintPrimeInterval(int num);

int main()
{
	int min,max,flag;

	printf("Enter Min Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&min);

	printf("Enter Max Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&max);

	for(int i=min;i<=max;i++)
	{
		flag=PrintPrimeInterval(i);

		if(flag==0)
			printf("%d ",i);
	}
	return 0;

}

int PrintPrimeInterval(int num)
{
	int j,flag=0;

		for(j=2;j<=num/2;j++)
		{
			if(num%j==0)
				{
					flag=1;
					break;
				}
		}


	return flag;
}
