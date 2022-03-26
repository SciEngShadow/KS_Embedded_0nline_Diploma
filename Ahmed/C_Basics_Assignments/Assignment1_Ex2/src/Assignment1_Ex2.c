/*
 ============================================================================
 Name        : Assignment1_Ex2.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Print a Integer Entered by a User

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int entered_int;
	printf("Enter an Intger: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&entered_int);
	printf("You Entered: %d",entered_int);

}
