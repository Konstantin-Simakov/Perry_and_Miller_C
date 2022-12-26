// do_while.c -- demonstrates working the do-while loop 
#include <stdio.h>

int main(void)
{
	float num_1, num_2, result;
	char choice;

	do
	{
		printf("Enter the first factor: ");
		scanf(" %f", &num_1);
		printf("Enter the second factor: ");
		scanf(" %f", &num_2);
		result = num_1 * num_2;
		printf("%.2f times %.2f equlas %.2f\n", num_1, num_2, result);

		printf("Do you wish to perform the multiple "
			"of the next pair of numbers? (Y/N): ");
		scanf(" %c", &choice);
	} while (choice != 'N' && choice != 'n');
	printf("Bye!\n");

	return 0;
}
