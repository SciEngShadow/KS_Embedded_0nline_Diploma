/*
 ============================================================================
 Name        : Assignment1_Ex2.c
 Author      : Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Check Wether The alphabet is vowel or consonant
 ============================================================================
 */

#include<stdio.h>

int main()
{
	char Entered_Alphabet;

	printf("Enter an Alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&Entered_Alphabet);

	switch(Entered_Alphabet){

				case 'a':
				case 'A':
				case 'e':
				case 'E':
				case 'i':
				case 'I':
				case 'o':
				case 'O':
				case 'u':
				case 'U':
						{
						printf("%c is a Vowel",Entered_Alphabet);
						break;
						}
				default:
						{
						printf("%c is a  Consonant",Entered_Alphabet);
						break;
						}

							}
	return 0;
}

