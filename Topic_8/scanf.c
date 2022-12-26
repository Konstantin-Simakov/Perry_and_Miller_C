// scanf.c -- demonstrates scanf() working with different format specifiers.
#include <stdio.h>

int main(void)
{
	char topping[24];
	int slices;
	int day, month, year;
	float price;

	printf("How many dollars does the pizza cost in your region? ");
	printf("(Enter as $XX.XX)\n");
	scanf(" $%f", &price);

	printf("What is your favourite topping? (One word)\n");
	scanf(" %s", topping);

	printf("How many slices can you eat at once?\n");
	scanf(" %d", &slices);

	printf("What is the date today? (Enter as XX/XX/XX)\n");
	scanf(" %d/%d/%d", &day, &month, &year);

	// Output results
	printf("\n\nWhy not treat yourself to dinner on %d/%d/%d ", 
		day, month, year);
	printf("and eat %d slices of pizza with %s topping?\n", 
		slices, topping);
	printf("It will cost only $%.2f\n", price);

	return 0;
}
