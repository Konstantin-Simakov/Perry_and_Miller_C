/* arithmetics2.c */
#include <stdio.h>
#include <float.h>		// FLT_DIG, DBL_DIG, LDBL_DIG
#include <math.h>		// For round()

int main(void)
{
	float a = 19.0;
	float b = 5.0;
	float float_answer;
	int x = 19;
	int y = 5;
	int int_asnwer;

	float_answer = a / b;
	printf("%.1f / %.1f = %.1f\n", a, b, float_answer);
	float_answer = round(float_answer);
	printf("%.1f / %.1f ~ %.1f\n", a, b, float_answer);
	float_answer = x / y;
	printf("%d / %d = %.1f\n", x, y, float_answer);

	int_asnwer = a / b;
	printf("%.1f / %.1f = %d\n", a, b, int_asnwer);
	int_asnwer = x / y;
	printf("%d / %d = %d\n", x, y, int_asnwer);
	int_asnwer = x % y;
	printf("%d %% %d = %d\n", x, y, int_asnwer);

	printf("Size of char = %zu bytes.\n", sizeof(char));
	printf("Size of int = %zu bytes.\n", sizeof(int));
	printf("Size of float = %zu bytes.\n", sizeof(float));
	printf("Size of double = %zu bytes.\n", sizeof(double));
	// printf("Size of long double = %zu bytes.\n", sizeof(long double));

	return 0;
}
