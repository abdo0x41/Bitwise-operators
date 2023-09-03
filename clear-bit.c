#include <stdio.h>

int main(void)
{

	unsigned char num, bit_num, set_bit, clr_bit;

	// printf("%s", "Enter a number : ");
	// scanf("%d", &num);

	printf("%s", "Enter bit number : ");
	scanf("%d", &bit_num);

	set_bit |= (1 << bit_num);

	printf("the number after setting the bit number %d is %d\n", bit_num, set_bit);


	clr_bit = ~((1 << bit_num) & set_bit);

	printf("the bit number %d is clear %d", bit_num, clr_bit);



	return(0);
}