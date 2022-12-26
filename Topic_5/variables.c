// variables.c -- using general data types
#include <stdio.h>

int main(void)
{
	char first_init, middle_init;
	int num_of_pencils;
	int num_of_notebooks;
	float pencil = 0.23;
	float notebook = 2.89;
	float lunchbox = 4.99;

	// Information for the 1st child
	first_init = 'J';
	middle_init = 'R';
	num_of_pencils = 7;
	num_of_notebooks = 4;

	printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", 
		first_init, middle_init, num_of_pencils, num_of_notebooks);
	printf("The total cost is $%.2f\n\n", 
		num_of_pencils * pencil + num_of_notebooks * notebook + lunchbox);

	// Information for the 2nd child
	first_init = 'A';
	middle_init = 'J';
	num_of_pencils = 10;
	num_of_notebooks = 3;

	printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", 
		first_init, middle_init, num_of_pencils, num_of_notebooks);
	printf("The total cost is $%.2f\n\n", 
		num_of_pencils * pencil + num_of_notebooks * notebook + lunchbox);

	// Information for the 3rd child
	first_init = 'M';
	middle_init = 'T';
	num_of_pencils = 9;
	num_of_notebooks = 2;

	printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", 
		first_init, middle_init, num_of_pencils, num_of_notebooks);
	printf("The total cost is $%.2f\n\n", 
		num_of_pencils * pencil + num_of_notebooks * notebook + lunchbox);

	return 0;
}
