// mark.c -- calculates average mark from four ones
#include <stdio.h>

#define BEST_GRADE 95.0

int main(void)
{
	int grade_1, grade_2, grade_3, grade_4;
	float average_grade, grade_delta, percent_diff;

	grade_1 = grade_3 = 88;
	grade_2 = 79;

	printf("What is your grade for the fourth test\n"
		"(integer number in the range from 0 to 100)? ");
	scanf(" %d", &grade_4);

	average_grade = (grade_1 + grade_2 + grade_3 + grade_4) / 4.0;
	printf("You average grade is %.1f.\n", average_grade);

	grade_delta = BEST_GRADE - average_grade;
	percent_diff = 100 * ((BEST_GRADE - average_grade) / BEST_GRADE);
	printf("Your grade is %.1f points lower than "
		"the best grade in the class.\n", grade_delta);
	printf("Your result is %.1f%% worse than "
		"this grade!\n", percent_diff);

	return 0;
}
