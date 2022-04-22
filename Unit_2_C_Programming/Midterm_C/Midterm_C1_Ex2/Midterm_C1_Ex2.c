/*
 ============================================================================
 Name        : Midterm_C1_Ex2.c
 Author      : Ahmed
 Description : c function to take an integer number and calculate it's
 	 	 	   square root?
 	 	 	   test case 1: input:4 ->output:2.000
 	 	 	   test case 2: input:10 ->output:3.162
 ============================================================================
 */
#include<stdio.h>
#include<math.h>

double SquRoot(int num);

int main()
{
	int num;
	double root;

	printf("Enter Your Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	root=SquRoot(num);

	printf("Input:%d -> Output:%.3lf",num,root);

	return 0;

}

double SquRoot(int num)
{
	double root ;

	root =exp(0.5*log(num));

	return root;
}
