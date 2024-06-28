/* math.c */
/* Demonstrates math function of C language. */
#include <stdio.h>
#include <string.h>
#include <math.h>

#define PI 3.14159

int main(void)
{
	// const double PI = atan(1) * 4;

	printf("Let\'s start homework!\n");
	
	printf("\nTopic 1: Square roots\n");
	printf("sqrt(49) = %.1f\n", sqrt(49.0));
	printf("sqrt(149) = %.1f\n", sqrt(149.0));
	printf("sqrt(.49) = %.1f\n", sqrt(.49));

	printf("\nTopic 2: Powers\n");
	printf("4^3 = %.1f\n", pow(4.0, 3.0));
	printf("7^5 = %.1f\n", pow(7.0, 5.0));
	printf("34^(1/2) = %.1f\n", pow(34.0, 0.5));

	printf("\nTopic 3: Trigonometry\n");
	printf("Cos of 60 degrees = %.3f\n", 
		cos(60 * (PI / 180)));
	printf("Sin of 90 degrees = %.3f\n", 
		sin(90 * (PI / 180)));
	printf("Tg of 75 degrees = %.3f\n", 
		tan(75 * (PI / 180)));
	printf("Arccos of 45 degrees = %.3f\n", 
		acos(45 * (PI / 180)));
	printf("Arcsin of 45 degrees = %.3f\n", 
		asin(30 * (PI / 180)));
	printf("Arctg of 15 degrees = %.3f\n", 
		atan(15 * (PI / 180)));


	printf("\nTopic 4: Logarithmic funcitons\n");
	printf("e^2 = %.3f\n", exp(2));
	printf("ln5 = %.3f\n", log(5));
	printf("lg5 = %.3f\n", log10(5));

	return 0;
}
