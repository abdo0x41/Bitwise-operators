#include <stdio.h>


#define    DATATYPE    sizeof(char) * 8 // here you can change data type dependance on your program


int main(void)
{

	 char num, L_set_bit;
	 char i;

	printf("%s", "Enter a number : ");
	scanf("%d", &num);


	for(i = 0; i != DATATYPE; i++)
	{
		if((num >> i) & 1)
		{   
			L_set_bit = i;
			break;
		}// end if
	} // end for

	printf("Highest set bit of number : %d is : %d", num, L_set_bit);
	



	return(0);
}