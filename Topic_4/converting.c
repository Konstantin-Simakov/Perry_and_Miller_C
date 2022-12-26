// converting.c -- uses general format specifiers for printf() function
#include <stdio.h>

int main(void)
{
	printf("Quantity\tCost\tTotal\n");
	printf("%d\t\t$%.2f\t$%.2f\n", 3, 9.99, 29.97);
	printf("Too many spaces    \b\b\b\b can be fixed with the ");
	printf("\\%c escape characters\n", 'b');
	printf("\n\a\n\a\n\a\n\aSkip a few lines, and beep ");
	printf("a few beeps.\n\n\n");
	printf("You just finished lesson %d.\nYou have finished ", 4);
	printf("%.1f%c of the all lessons.\n", 12.500, '%');
	printf("\n\nOnce third equals %.2f or ", 0.333333);
	printf("%.3f or %.4f or ", 0.333333, 0.333333);
	printf("%.5f or %.6f\n\n\n", 0.333333, 0.333333);

	return 0;
}
