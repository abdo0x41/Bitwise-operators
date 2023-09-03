#include <stdio.h>


#define    DATATYPE    sizeof(char) * 8 - 1 // here you can change data type dependance on your program


int main(void)
{

	unsigned char num, h_set_bit;
	int i;

	printf("%s", "Enter a number : ");
	scanf("%d", &num);


	for(i = 0; i != DATATYPE; i++)
	{
		if((num >> i) & 1)
			h_set_bit = i;

	} // end for

	printf("Highest set bit of number : %d is : %d", num, h_set_bit);
	



	return(0);
}