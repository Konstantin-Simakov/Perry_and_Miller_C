// scanf.c -- using scanf() function
#include <stdio.h>

int main(void) 
{
	float gift1, gift2, gift3, gift4, gift5;
	float total;

	printf("How many dollars are you ready to spent on your mother? ");
	scanf(" %f", &gift1);
	printf("How many dollars are you ready to spent on your father? ");
	scanf(" %f", &gift2);
	printf("How many dollars are you ready to spent on your sister? ");
	scanf(" %f", &gift3);
	printf("How many dollars are you ready to spent on your brother? ");
	scanf(" %f", &gift4);
	printf("How many dollars are you ready to spent on your aunt? ");
	scanf(" %f", &gift5);

	total = gift1 + gift2 + gift3 + gift4 + gift5;
	printf("\nTotal sum you are ready to spend on gifts: $%.2f\n", total);

	return 0;
}
