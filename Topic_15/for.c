// for.c -- demonstrates working the for loop
#include <stdio.h>

int main(void)
{
	int ctr;
	int i, j;

	for (ctr = 1; ctr <= 5; ++ctr)
		printf("Counter value: %d\n", ctr);
	printf("\n");

	ctr = 1;
	while (ctr <= 5)
		printf("Counter value: %d\n", ctr++);
	printf("\n");

	for (ctr = 5; ctr >= 1; ctr--)
		printf("%d\n", ctr);
	printf("Badoom!\n");

	for (i =  1; i < 18; i += 3)
		printf("%d ", i);
	printf("\n\n");

	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 5; j++)
			printf("%d ", j);
		printf("\n");
	}

	return 0;
}
