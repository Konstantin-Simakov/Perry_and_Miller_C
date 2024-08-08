/* pointer.c */
/* Demonstrates simple using of pointers. */
#include <stdio.h>

#define EMPLOYER_DISCOUNT 0.25
#define SAV_MORE_DISCOUNT 0.15

int main(void)
{
    int kids;
    int * p_kids;
    float price;
    float * p_price;
    char code;
    char * p_code;
    double total_price = 0;
    double * p_total_price = &total_price;

    price = 17.50;
    p_price = &price;

    printf("How many kids do you led to aquapark? ");
    scanf(" %d", &kids);
    p_kids = &kids;

    printf("\nDo you have a discount?\n");
    printf("Enter \"E\" to get a discount for an employer, "
            "\"S\" to get a discount about Sav-More program "
            "or \"N\" if you have\'t a discount.\n");
    scanf(" %c", &code);
    p_code = &code;

    printf("\nFirstly, let\'s work with variables:\n");
    printf("You have %d kids...\n", kids);
    printf("Ticket price: $%.2f\n", price);
    switch (code)
    {
        case 'E':
            printf("Employer discount lets you save %.0f%% off a ticket price.", 100 * EMPLOYER_DISCOUNT);
            total_price = price * (1 - EMPLOYER_DISCOUNT) * kids;
            break;
        case 'S':
            printf("Sav-More discount lets you save %.0f%% off a ticket price.", 100 * SAV_MORE_DISCOUNT);
            total_price = price * (1 - SAV_MORE_DISCOUNT) * kids;
            break;          
        default:
            printf("If you entered \'N\' or incorrect letter, you will pay full cost.");
            total_price = price * kids;
            break;                      
    }
    printf("\nTotal price of tickets: $%.2f\n", total_price);

    printf("\n\nThen repeat previous code with dereferenced pointers:\n");
    printf("You have %d kids...\n", *p_kids);
    printf("Ticket price: $%.2f\n", *p_price);
    switch (*p_code)
    {
        case 'E':
            printf("Employer discount lets you save %.0f%% off a ticket price.", 100 * EMPLOYER_DISCOUNT);
            *p_total_price = *p_price * (1 - EMPLOYER_DISCOUNT) * *p_kids;
            break;
        case 'S':
            printf("Sav-More discount lets you save %.0f%% off a ticket price.", 100 * SAV_MORE_DISCOUNT);
            *p_total_price = *p_price * (1 - SAV_MORE_DISCOUNT) * *p_kids;
            break;          
        default:
            printf("If you entered \'N\' or incorrect letter, you will pay full cost.");
            *p_total_price = *p_price * *p_kids;
            break;                      
    }
    printf("\nTotal price of tickets: $%.2f\n", *p_total_price);

    return 0;
}
