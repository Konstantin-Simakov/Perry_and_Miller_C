/* test_grades.c */
/* Calculate average grade for a student test. */
#include <stdio.h>

int main(void)
{
	int num_test;
	float st_test, avg, total = 0.0;

	for (num_test = 0; num_test < 25; num_test++)
	{
		printf("\nEnter the student grade: ");
		scanf(" %f", &st_test);
		if (st_test < 0.0)
			break;

		total += st_test;
	}
	
	avg = total / num_test;
	printf("\nAverage grade %.1f%%.\n", avg);

	return 0;
}
