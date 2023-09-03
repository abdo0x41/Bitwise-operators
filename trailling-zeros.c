// Write a program to count trailling zeros.

#include <stdio.h>


int main(void)
{


	char num, i, count, result;

	printf("Enter a number : ");
	scanf("%d", &num);

	for(i = 0; i < sizeof(char) * 8; i++)
	{

		result = ((num >> i) & 1);

		if(result == 0)
		{
			count++;
		}
		else{
			break;
		}
	}

	printf("%d has %d trailling zeros.", num, count);



	return(0);
}