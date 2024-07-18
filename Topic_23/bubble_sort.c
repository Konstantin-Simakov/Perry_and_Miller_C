/* bubble_sort.c */
/* Demonstrate improved bubble sort algorithm. */
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

    // Array sorting.
    for (outer = 0; outer < NUM - 1; outer++)
        for (inner = outer + 1; inner < NUM; inner++)
            if (arr[inner] < arr[outer])
            {
                temp = arr[inner];
                arr[inner] = arr[outer];
                arr[outer] = temp;
            }

    puts("\nArray after sorting:");
    for (ctr = 0; ctr < NUM; ctr++)
        printf("%2d  ", arr[ctr]);
    putchar('\n');

    return 0;
}
