/* sort_and_search.c */
/* The program first sorts the array with improved bubble sort algorithm
   (three optimizations), then applies to it sequential search.  */
#include <stdio.h>

#define CUSTOMERS 10

int main(void)
{
    int ctr;
    int id_search;
    int is_found;
    int cust_id[CUSTOMERS] = {
        313, 453, 502, 101, 892,
        475, 792, 912, 343, 633
    };
    float cust_bal[CUSTOMERS] = {           // Client balances.
        0.00, 45.43, 71.23, 301.56, 9.08,
        192.41, 389.99, 229.67, 18.31, 59.54
    };
    int temp_id, inner, outer, did_swap;    // For sorting; did_swap is a boolean variable.
    float temp_bal;

    // Sorting the cust_id array (and its parallel cust_bal 
    // array along with it) in ascending order
    // using the bubble sort method with three optimizations.
    for (outer = 0; outer < CUSTOMERS - 1; outer++)
    {
        did_swap = 0;
        for (inner = 0; inner < (CUSTOMERS - 1) - outer; inner++)
        {
            if (cust_id[inner] > cust_id[inner + 1])
            {
                did_swap = 1;
                // Swap id.
                temp_id = cust_id[inner];
                cust_id[inner] = cust_id[inner + 1];
                cust_id[inner + 1] = temp_id;

                // And swap balances according to the same condition. 
                temp_bal = cust_bal[inner];
                cust_bal[inner] = cust_bal[inner + 1];
                cust_bal[inner + 1] = temp_bal;
            }           
        }
        if (0 == did_swap)
            break;
    }

    // User interaction.
    printf("\n\n*** User balance checking ***\n");
    printf("Enter searched user id: ");
    scanf(" %d", &id_search);
    // Search.
    is_found = 0;
    for (ctr = 0; ctr < CUSTOMERS; ++ctr)
    {
        // printf("%d ", cust_id[ctr]);        // For checking the sort algorithm. 
        if (cust_id[ctr] == id_search)
        {
            is_found = 1;
            break;
        }
        // Since the array is sorted, 
        // there is no point in continuing the search 
        // based on this condition.
        if (cust_id[ctr] > id_search)
            break;
    }
    if (is_found)
    {
        if (cust_bal[ctr] > 100.00)
        {
            printf("\n**Client balance: $%.2f.\n", cust_bal[ctr]);
            printf("  Credit is unable.\n");
        }
        else
            printf("\n**The client has a good balance!\n");
    }
    else
    {
        printf("**You entered incorrect client ID.\n");
        printf("  Entered ID %3d hasn\'t found in the list.\n", id_search);
    }

    return 0;
}
