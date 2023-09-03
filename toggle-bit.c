#include <stdio.h>


int main(void)
{

	char num = 4, bit_num, toggle_bit;

	printf("%s", "Enter bit number : ");
	scanf("%d", &bit_num);

	toggle_bit = ((1 << bit_num) ^ num);

	printf("bit number %d is %d", bit_num,(toggle_bit)? (toggle_bit) : (toggle_bit));



	return(0);
}