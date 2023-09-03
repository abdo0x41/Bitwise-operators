// Write a program to check least segnificant bit is set or not.
// Write any number and check.


#include <stdio.h>


int main(void)
{	

	int num;

	printf("Enter a number to check if the LSB is set or not : ");
	scanf("%d", &num);

	printf("%s", (num & 1)? ("LSB is set") : ("LSB is 0"));



	return(0);
}