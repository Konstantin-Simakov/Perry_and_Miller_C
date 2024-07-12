/* credit_balance.c */
/* Credit application. */
#include <stdio.h>

#define CUSTOMERS       10
#define LIMIT_CREDIT    100.0

int main(void)
{
    int ctr;                
    int id_search;
    int is_found = 0;          // Boolean value; 1 (True) if id is found.
    int cust_id[CUSTOMERS] = {
        313, 453, 502, 101, 892,
        475, 792, 912, 343, 633
    };
    double cust_credit_bal[CUSTOMERS] = {
        0.00, 45.43, 71.23, 301.56, 9.08,
        192.41, 389.00, 229.67, 59.54
    };

    // User interaction.
    printf("*** User balance checking ***\n");
    printf("Enter searched id of a client: ");
    scanf(" %d", &id_search);

    // Searching the number in the array and set the flag.
    for (ctr = 0; ctr < CUSTOMERS; ++ctr)
    {
        if (id_search == cust_id[ctr])
        {
            is_found = 1;
            break;
        }
    }

    if (is_found)
    {
        if (cust_credit_bal[ctr] > LIMIT_CREDIT)
        {
            printf("\n**Cridet balance of the client: $%.2f.\n", cust_credit_bal[ctr]);
            printf("  Credit is unable.\n");
        }
        else
            printf("The client has a good credit balance!\n");
    }
    else
    {
        printf("**You entered incorrect client's ID.\n");
        printf("  Entered ID %3d hasn\'t found in the list.\n", id_search);
    }

    return 0;
}
