// Write a program to count leading zeros.
// Created by "Abdulrahman Elgamal".

#include <stdio.h>

#define    DATATYPE    sizeof(char) * 8 

int main(void)
{

	char num, i, count, result;

	printf("Enter a number : ");
	scanf("%d", &num);

	for(i = 0; i < DATATYPE; i++)
	{

		if(!(num >> i) & 1)
		{
			count++;
		
		}// End if
	}// end for

	printf("%d has %d leading zeros.", num, count);

	

	return(0);
}