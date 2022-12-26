// interactive.c -- demonstrates working scanf(), printf() functions.
#include <stdio.h>

int main(void)
{
	char first_initial;
	char middle_initial;
	int age = 0;
	int favourite_num = 0;

	printf("What letter does you first name start with?\n");
	scanf(" %c", &first_initial);

	printf("What letter does you middle name start with?\n");
	scanf(" %c", &middle_initial);

	printf("How old are you?\n");
	scanf(" %d", &age);

	printf("What is your favourite number? (Only integer)\n");
	scanf(" %d", &favourite_num);

	// Output results
	printf("\n\nYour initials: %c.%c., and you are %d years.\n", 
		first_initial, middle_initial, age);
	printf("Your favourite number is %d.\n", favourite_num);

	return 0;
}
