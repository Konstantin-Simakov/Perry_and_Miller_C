/* average.c */
/* The program calculates an average for 3 test values. */
#include <stdio.h>

double average(double test_1, double test_2, double test_3);

int main(void)
{
    double grade_1, grade_2, grade_3;
    double avg;

    // Data collection (input).
    printf("What is your grade for the first test? ");
    scanf(" %lf", &grade_1);       
    printf("What is your grade for the second test? ");
    scanf(" %lf", &grade_2);       
    printf("What is your grade for the third test? ");
    scanf(" %lf", &grade_3);     

    // Calculations and output of results.
    avg = average(grade_1, grade_2, grade_3);
    printf("\nAverage grade for 3 tests is %.2f\n", avg);

    return 0;
}

double average(double test_1, double test_2, double test_3)
{
    double local_avg;

    local_avg = (test_1 + test_2 + test_3) / 3;

    return local_avg;
    // return (test_1 + test_2 + test_3) / 3;
}
