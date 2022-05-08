/*
 ============================================================================
 Name        : Assignment5_Ex4.c
 Author      : Ahmed
 Description : C Program to Store Information of Students Using Structure
 ============================================================================
 */

#include<stdio.h>

struct student
{
	int roll;
	char name[20];
	float marks;
};

int main()
{
	int arr_size=100,i;
	struct student s[arr_size];

	printf("Enter Num of Students:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&arr_size);

	for(i=0;i<arr_size;i++)
	{
		s[i].roll=i+1;
		printf("\nFor Roll Number:%d\n",s[i].roll);

		printf("Enter Name:");
		fflush(stdin);fflush(stdout);
		gets(s[i].name);

		printf("Enter Marks:");
		fflush(stdin);fflush(stdout);
		scanf("%f",&s[i].marks);

	}

	printf("\nDisplaying Information:\n");

	for(i=0;i<arr_size;i++)
	{
		printf("\nInformation for roll number %d:\nName:%s\nMarks:%.1f\n",s[i].roll,s[i].name,s[i].marks);
	}


	return 0;
}


