/*
 ============================================================================
 Name        : Assignment3_Ex2.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program To find transpose of the matrix
 ============================================================================
 */

#include<stdio.h>

int main()
{
int Matrix[100][100];
int Transposed_Matrix[100][100];
int Matrix_Rows,Matrix_Columns;

printf("Enter Matrix Size Rows then Columns \n");
fflush(stdin); fflush(stdout);
scanf("%d%d",&Matrix_Rows,&Matrix_Columns);
// Matrix
		for(int i=1;i<=Matrix_Rows;i++)
		{
			for(int j=1;j<=Matrix_Columns;j++)
					{
						printf("Enter Element %d%d: ",i,j);
						fflush(stdin); fflush(stdout);
						scanf("%d",&Matrix[i][j]);
					}
		}

//Displaying Matrix
		printf("Entered Matrix: \n");
		for(int i=1;i<=Matrix_Rows;i++)
		{
			for(int j=1;j<=Matrix_Columns;j++)
					{
						printf("%d\t",Matrix[i][j]);

						if(j==Matrix_Columns)
						{
							printf("\n");
						}
					}
		}

// Transposed Matrix
		for(int i=1;i<=Matrix_Rows;i++)
		{
			for(int j=1;j<=Matrix_Columns;j++)
					{
				     	 Transposed_Matrix[j][i]=Matrix[i][j];
				    }
		}

//Displaying Transposed Matrix
		printf("Transposed Matrix: \n");
		for(int i=1;i<=Matrix_Columns;i++)
		{
			for(int j=1;j<=Matrix_Rows;j++)
					{
						printf("%d\t",Transposed_Matrix[i][j]);

						if(j==Matrix_Rows)
						{
							printf("\n");
						}
					}
		}

		return 0;

}
