#include <stdio.h>

int main(void)
{

	int num, bit_num, set_bit;

	printf("%s", "Enter a number : ");
	scanf("%d", &num);

	printf("%s", "Enter bit number : ");
	scanf("%d", &bit_num);

	set_bit = ((1 << bit_num) | num);

	printf("the number after setting the bit number %d is %d", bit_num, set_bit);

	return(0);
}