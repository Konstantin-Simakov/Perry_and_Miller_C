/* return_two_values.c */
/* There is a function that returns two values in the program.
Although this could be generalized to a larger number of returning values. */
#include <stdio.h>

#define MONTHS      12
#define TAX_RATE    0.15

void accounting(double month_sales, double * total_sales, double * sum_tax);

int main(void)
{
    double month_sales;
    double sum_tax, total_sales;

    // Data input.
    printf("Enter average monthly sales: $");
    scanf(" %lf", &month_sales);

    // Return (conditional) 2 values: 'total_sales' and 'sum_tax' 
    // from the function named accounting() and display results.
    accounting(month_sales, &total_sales, &sum_tax);
    printf("The total sales (for 1 year) is $%.2f, the sum of tax is $%.2f.\n", 
            total_sales, sum_tax);

    return 0;
}

void accounting(double month_sales, double * total_sales, double * sum_tax)
{
    *total_sales = month_sales * MONTHS;
    *sum_tax = *total_sales * TAX_RATE;
}
