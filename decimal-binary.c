//Write a C program to convert decimal to binary number system using bitwise operator.
// Created by "Abdulrahman Elgamal".

#include <stdio.h>

#define		DATATYPE	sizeof(char) * 8

int main(void)
{		


	char num, binary, i;

	printf("%s","Enter a number : ");
	scanf("%d", &num);

	for(i = 0; i < DATATYPE; i++)
	{
		printf("%d", ((num >> i) & 1));

	}// end for



	return(0);
}