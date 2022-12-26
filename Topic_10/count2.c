// count2.c -- using counters as function arguments
#include <stdio.h>
#include <math.h>			// -lm, for sqrt()

int main(void)
{
	int ct = 0;
	// float salary = 15.0;
	// int age = 900;
	// int cycle = 150;

	// salary = salary * ((float) 900 / cycle);

	// int x = 15.25 + 4;
	// printf("x = %d\n", x);

	ct += 1;
	printf("Counter value: %d\n", ct);
	ct += 1;
	printf("Counter value: %d\n", ct);
	ct += 1;
	printf("Counter value: %d\n", ct);
	ct += 1;
	printf("Counter value: %d\n", ct);
	printf("Counter value: %d\n", ct + 1);

	printf("Counter value: %d\n", ct);
	ct -= 1;
	printf("Counter value: %d\n", ct);
	ct -= 1;
	printf("Counter value: %d\n", ct);
	ct -= 1;
	printf("Counter value: %d\n", ct);


	return 0;
}
