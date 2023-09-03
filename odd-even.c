// Write a program to check a number is even or odd using bitwise.
// Created by "Abdulrahma Elgamal".

#include <stdio.h>

int main(void)
{

	char num;

	printf("%s", "Enter a number : ");
	scanf("%d", &num);

	printf("%d is %s", num, (num & 1)? ("Odd") : ("Even"));


	return(0);
}