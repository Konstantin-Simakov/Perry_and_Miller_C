/* pass_by_address_str.c */
/* The program passes arguments by address for a character array. */
#include <stdio.h>

void change(char * str);

int main(void)
{
    char name[] = "Michael Hatton";
    
    printf("Firstly in main() name is %s.\n", name);
    change(name);
    printf("After working change() name changed to %s.\n", name);

    return 0;
}

void change(char * str)
{
    while (*str)        // == while (*str != '\0')
    {
        *str = 'X';
        ++str;
    }
}
