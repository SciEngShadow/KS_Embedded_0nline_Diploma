/*
 ============================================================================
 Name        : Assignment5_Ex3.c
 Author      : Ahmed
 Description : C Program to Add Two Complex Numbers by Passing Structure to a Function
 ============================================================================
 */

#include<stdio.h>

struct Complex
{
	float real,imag;
};
struct Complex addComplex(struct Complex num1,struct Complex num2);

int main()
{
	struct Complex num1,num2,sum;

	printf("Enter 1st Complex Num(Real then Imag Respectively):");
	fflush(stdin);fflush(stdout);
	scanf("%f%f",&num1.real,&num1.imag);


	printf("Enter 2nd Complex Num(Real then Imag Respectively):");
	fflush(stdin);fflush(stdout);
	scanf("%f%f",&num2.real,&num2.imag);

	sum=addComplex(num1,num2);

	printf("Sum=%0.1f+%0.1fi",sum.real,sum.imag);
	return 0;
}

struct Complex addComplex(struct Complex num1,struct Complex num2)
{
	struct Complex sum;

	sum.real=num1.real+num2.real;
	sum.imag=num1.imag+num2.imag;

	return (sum);
}
