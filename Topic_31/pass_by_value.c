/* pass_by_value.c */
/* The program passes arguments by value. */
#include <stdio.h>

void half(int num);

int main(void)
{
    int num;

    printf("Please enter the integer: ");
    scanf(" %d", &num);

    // Call the function with passing argument by value.       
    half(num);
    // Check out that the function haven't changed the value of variable.
    printf("In main() the value of 'num' variable is still %d.\n", num);

    return 0;
}

/*-------------------------------------------------------------------------*/

void half(int num)
{
    num /= 2;
    printf("The value devided by half: %d\n", num);
}
