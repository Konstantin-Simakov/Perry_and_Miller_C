// division.c -- demonstrates ?: operator working in C/C++
#include <stdio.h>

int main(void)
{
	int num_pick;

	printf("Pick the number from 0 to 100 ");
	printf("(the bigger, the better!)\n");

	scanf(" %d", &num_pick);
	printf("%d is %sdivided by 2.\n", num_pick, 
		(num_pick % 2 == 0) ? "" : "not ");
	printf("%d is %sdivided by 3.\n", num_pick, 
		(num_pick % 3 == 0) ? "" : "not ");
	printf("%d is %sdivided by 4.\n", num_pick, 
		(num_pick % 4 == 0) ? "" : "not ");
	printf("%d is %sdivided by 5.\n", num_pick, 
		(num_pick % 5 == 0) ? "" : "not ");
	printf("%d is %sdivided by 6.\n", num_pick, 
		(num_pick % 6 == 0) ? "" : "not ");
	printf("%d is %sdivided by 7.\n", num_pick, 
		(num_pick % 7 == 0) ? "" : "not ");
	printf("%d is %sdivided by 8.\n", num_pick, 
		(num_pick % 8 == 0) ? "" : "not ");
	printf("%d is %sdivided by 9.\n", num_pick, 
		(num_pick % 9 == 0) ? "" : "not ");

	return 0;
}
