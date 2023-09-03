// Write a program to get nth of bit.

#include <stdio.h>

int main(void)
{

	 int num, bit_num, get_Bit;

	/* obtain number from the user */
	printf("enter a number : ");
	scanf("%d", &num);

	/* obtain how many bits will shift to do & operation to check the nth bit */
	printf("%s", "Bit Number : ");
	scanf("%d", &bit_num);

 	get_Bit = ((1 << bit_num) & num);


	printf("The bit %dth %s", bit_num, (get_Bit)? ("is Set") : ("is Clear"));
	/***
	 * ## NOTE : the value of 1 has changed so always prefer to shift num to right and then anding it with one.
	*/


	return(0);
} // end main