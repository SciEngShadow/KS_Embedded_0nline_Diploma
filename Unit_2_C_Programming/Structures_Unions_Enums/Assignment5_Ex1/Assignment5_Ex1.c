/*
 ============================================================================
 Name        : Assignment5_Ex1.c
 Author      : Ahmed
 Description : C Program to Store information in sturcture
 ============================================================================
 */

#include<stdio.h>

struct student
{
	char name[20];
	char rollNum;
	float marks;
};

int main()
{
	struct student s;

	printf("Enter Information of Students:\n");

	printf("Enter Name:");
	fflush(stdin);fflush(stdout);
	gets(s.name);

	printf("Enter Roll Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&s.rollNum);

	printf("Enter Marks:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&s.marks);

	printf("\nDisplaying Information:\n");

	printf("Name:%s\nRoll Number:%d\nMarks:%.2f",s.name,s.rollNum,s.marks);


	return 0;
}
