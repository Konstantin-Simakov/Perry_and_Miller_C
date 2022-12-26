// count.c -- counts from 1 to 5 and in reverse order
#include <stdio.h>

int main(void)
{
	int ct = 0;

	ct = ct + 1;
	printf("Counter value: %d\n", ct);
	ct = ct + 1;
	printf("Counter value: %d\n", ct);
	ct = ct + 1;
	printf("Counter value: %d\n", ct);
	ct = ct + 1;
	printf("Counter value: %d\n", ct);
	ct = ct + 1;

	printf("Counter value: %d\n", ct);
	ct = ct - 1;
	printf("Counter value: %d\n", ct);
	ct = ct - 1;
	printf("Counter value: %d\n", ct);
	ct = ct - 1;
	printf("Counter value: %d\n", ct);
	ct = ct - 1;
	printf("Counter value: %d\n", ct);

	return 0;
}
