// while.c -- demonstrates working the while loop
#include <stdio.h>

int main(void)
{
	int ctr = 0;

	while (ctr < 100)
	{
		// ++ctr;
		printf("Counter value: %d\n", ++ctr);
	}
	while (ctr > 1)
	{
		// --ctr;
		printf("Counter value: %d\n", --ctr);
	}	

	return 0;
}
