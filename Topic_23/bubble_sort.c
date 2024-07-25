/* bubble_sort.c */
/* Demonstrate common bubble sort algorithm. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 10

int main(void)
{
    int ctr, inner, outer, temp;
    int arr[NUM];

    srand(time(0));
    for (ctr = 0; ctr < NUM; ctr++)
        arr[ctr] = rand() % 99 + 1;     // Generate random number in the range [1; 99].

    puts("\nArray before sorting:");
    for (ctr = 0; ctr < NUM; ctr++)
        printf("%2d  ", arr[ctr]);
    putchar('\n');

    // Common array bubble sorting in ascending order.
    for (outer = 0; outer < NUM; outer++)
    {
        for (inner = 0; inner < NUM - 1; inner++)
        {
            if (arr[inner] > arr[inner + 1])
            {
                temp = arr[inner];
                arr[inner] = arr[inner + 1];
                arr[inner + 1] = temp;
            }            
        }
    }

    puts("\nArray after sorting:");
    for (ctr = 0; ctr < NUM; ctr++)
        printf("%2d  ", arr[ctr]);
    putchar('\n');

    return 0;
}
