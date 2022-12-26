/* arithmetics.c -- base arithmetic operations in C */
#include <stdio.h>
#include <string.h>		// For strcat()

int main(void)
{
	int total_sales;
	int local_sales = 5, international_sales = 6;
	int sales_returs = -4;
	total_sales = local_sales + international_sales - sales_returs;
	printf("total_sales = %d\n", total_sales);

	int new_value;
	int old_value = 10;
	int factor = 1;
	new_value = old_value - -factor;
	printf("new_value = %d\n", new_value);

	int age = 15;
	printf("I will be %d years in 3 years.\n", age + 3);

	double fact = 15;
	double new_factor = fact * (1 / 5);
	printf("new_factor = %.2f\n", new_factor);

	char str1[40] = "Hello, ";
	char str2[] = "world!";
	strcat(str1, str2);
	puts(str1);
	printf("%s\n", str1);

	return 0;
}
