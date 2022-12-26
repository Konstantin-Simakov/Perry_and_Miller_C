// incr_and_decr.c
// The program demonstrates the postfix form of 
// increment (++) and decrement (--) working operations.
#include <stdio.h>

int main(void)
{
	int ctr = 0;

	// Pre-increment
	printf("Counter value: %d\n", ctr++);
	printf("Counter value: %d\n", ctr++);
	printf("Counter value: %d\n", ctr++);
	printf("Counter value: %d\n", ctr++);
	printf("Counter value: %d\n", ctr++);

	// Pre-decrement
	printf("Counter value: %d\n", ctr--);
	printf("Counter value: %d\n", ctr--);
	printf("Counter value: %d\n", ctr--);
	printf("Counter value: %d\n", ctr--);

	return 0;
}
