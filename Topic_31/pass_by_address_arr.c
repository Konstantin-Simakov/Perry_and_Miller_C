/* pass_by_address_arr.c */
/* The program passes arguments by address for a common array. */
#include <stdio.h>

#define SIZE 5

void change_some(int num, double * p_num, int arr[], int n);

int main(void)
{
    int arr[SIZE] = {10, 20, 30, 40, 50};
    int num = 10;
    int ctr;
    double x = 20.5;

    // Initial data output.
    puts("Variables of main() before:");
    printf("num = %d\n", num);
    printf("x = %.1f\n", x);
    for (ctr = 0; ctr < SIZE; ++ctr)
        printf("arr[%d] = %d\n", ctr, arr[ctr]);

    // Data processing.
    change_some(num, &x, arr, SIZE);

    // Processed data output.
    puts("\n\nVariables of main() after:");
    printf("num = %d\n", num);
    printf("x = %.1f\n", x);
    for (ctr = 0; ctr < SIZE; ++ctr)
        printf("arr[%d] = %d\n", ctr, arr[ctr]);

    return 0;
}

void change_some(int num, double * p_num, int arr[], int n)
{
    num = 47;                       // In main() it won't be changed there.
    *p_num = 97.6;                  // In main() it'll be changed there.
    for (int i = 0; i < n; ++i)
        arr[i] = 100 + 100 * i;     // In main() it'll be changed there.
}
