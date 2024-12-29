/* pass_by_address_var.c */
/* The program passes arguments by address for a ussual variable. */
#include <stdio.h>

void half(int * n);

int main(void)
{
    int num;

    printf("Please enter an integer: ");
    scanf(" %d", &num);
    half(&num);
    printf("Now num is %d\n", num);

    return 0;
}

void half(int * n)
{
    *n /= 2;
    printf("The value devided by half: %d\n", *n);
}
