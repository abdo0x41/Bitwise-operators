// Write a program to check if the MSB is set or not.


#include <stdio.h>

int main(void)
{	


	char num;

	printf("Enter a number to check if the MSB is set or not : ");
	scanf("%d", &num);
	
	printf("%s", (num & (1 << num))? ("MSB is set") : ("MSB isn't set"));



	return(0);
}