// Write a program to conunt total zeros and ones in a binary number.
// Created by "Abdulrahman Elgamal".

#include <stdio.h>

#define 	DATATYPE	sizeof(char) * 8


int main(void)
{	

	char num, i, zero, one;

	printf("%s", "Enter a number : ");
	scanf("%d", &num);

	for(i = 0; i < DATATYPE; i++)
	{
		if((num >> i) & 1)
		{
			one++;
		}
		else{
			zero++;
		
		}//end if
	}//end for

	printf("total zeros = %d\n\
		    total ones = %d", zero, one);




	return(0);
}	