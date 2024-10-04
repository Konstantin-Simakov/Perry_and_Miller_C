/* memory_alocate.c */
/* This program calculates the smallest, the biggest and 
an average value of the collection of random numbers.  */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 500
#define COLUMNS 5

int main(void)
{
    int i, size, biggest, smallest;
    double average, total;
    int * random_numbers;

    // Data input.
    srand(time(0));
    printf("How many random numbers will be in the array? ");
    scanf(" %d", &size);
    random_numbers = (int *) malloc(size * sizeof(int));
    if (!random_numbers)
    {
        printf("Random numbers memory allocation error!\n");
        exit(EXIT_FAILURE);
    }

    // Random initialization.
    for (i = 0; i < size; ++i)
        random_numbers[i] = rand() % MAX_NUMBER + 1;
    
    // Printing the array.
    putchar('\n');
    for (i = 0; i < size; ++i)
    {
        printf("%5d", random_numbers[i]);
        if (i % COLUMNS == COLUMNS - 1)
            putchar('\n');
    }
    putchar('\n');

    // Calculations.
    biggest = 0;
    smallest = MAX_NUMBER;
    total = 0.0;
    for (i = 0; i < size; ++i)
    {
        total += random_numbers[i];
        if (random_numbers[i] > biggest)
            biggest = random_numbers[i];
        if (random_numbers[i] < smallest)
            smallest = random_numbers[i];
    }
    average = total / size;

    // Data output.
    printf("The biggest random number: %d.\n", biggest);
    printf("The smallest random number: %d.\n", smallest);
    printf("Average of random numbers: %.2f.\n", average);

    free(random_numbers);

    return 0;
}
