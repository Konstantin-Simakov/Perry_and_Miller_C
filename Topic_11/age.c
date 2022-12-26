// age.c -- demonstrates working if operator
#include <stdio.h>

#define CURRENT_YEAR 2022

int main(void)
{
	int year_born, age;

	printf("What year do you born in?\n");
	scanf(" %d", &year_born);
	if (year_born > CURRENT_YEAR)
	{
		printf("Really? You haven\'t born yet!\n");
		printf("Do you want to try to enter antoher year?\n");
		printf("What year do you born in?\n");
		scanf(" %d", &year_born);		
	}

	age = CURRENT_YEAR - year_born;
	printf("\nYou will %d years in the current birthday!\n", age);

	if (year_born % 4 == 0)
		printf("\nYou were born on a leap year! That\'s cool!\n");

	return 0;
}
