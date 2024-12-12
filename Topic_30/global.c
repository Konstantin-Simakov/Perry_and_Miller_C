/* global.c */
/* The program demonstrates deference between global and local variables. */
#include <stdio.h>

int g_1 = 10;

void print_again(void);

int main(void)
{
    double l_1;

    l_1 = 9.0;
    // Impossible to print 'g_2' in printf() because
    // it's defined after its call.
    printf("g_1 = %d, l_1 = %.2f\n", g_1, l_1);     // Output global variable and then local one.
    print_again();                                  // Call the first self-written function.

    return 0;
}

double g_2 = 19.0;

void print_again(void)
{
    int l_2 = 5;

    // It's impossible to print 'l_1' 
    // because it's a local variable of main() function. 
    printf("l_2 = %d, g_2 = %.2f, g_1 = %d\n", l_2, g_2, g_1);
}
