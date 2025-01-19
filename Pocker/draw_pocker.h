/* draw_pocker.h */
/* Header file for draw_pocker.c, draw_pocker_sup.c source files. */

#ifndef DRAW_POCKER_H_
#define DRAW_POCKER_H_

#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define HAND    5       // The number of cards in a hand.
#define RANKS   13      // The number of ranks for column of 52 cards.
#define SUITS   4       // The number of suits for column of 52 cards.
#define SIZE    3       // The size of C string 'rank'.
#define MAX_BET 5       // The max bet of credits.

/* The structure of a hand consisting of a two parallel integer arrays. */
typedef struct Hand {
    int card_ranks[HAND];
    int card_suits[HAND];
} Hand;

/* Print greeting for a user.
Pre-condition: none.
Post-condition: the function displays a greeting on the screen. */
void print_greeting(void);

/* Get bet from a user.
Pre-condition: none.
Post-condition: the function returns a requested from a standard input stream bet by a user. */
int get_bet(void);

/* Get suit of a card.
Pre-condition: the funciton takes a suit number as an integer.
Post-condition: the function returns a symbolic suit presentation of a card. */
char get_suit(int num_suit);

/* Get rank of a card.
Pre-condition: the funciton takes a rank number as an integer and character array to store
symbolic rank presentation of a card.
Post-condition: the function stores card rank to the array and returns a pointer 
to the first element of it. */
char * get_rank(int num_rank, char * rank);

/* Get the first deal to a hand of the user. 
Pre-condition: the funciton takes an address of the first hand to form it for a user.
Post-condition: the function form the hand after the first deal. */
void get_first_hand(Hand * p_first_hand);

/* Get the final deal to a hand of the user based on the first deal to the hand.
Pre-condition: the function takes addresses of the final hand, first hand and 
arrays of ranks and suits of this hand.
Post-condition: the function forms a final hand based on the first hand and 
put down the information about ranks and suits on the hand to the corresponding arrays. */
void get_final_hand(Hand * p_final_hand, const Hand * p_first_hand, 
    int ranks_in_hand[], int suits_in_hand[]);

/* Analyze a hand based on gathered information about ranks and suits on the hand.
Pre-condition: the function takes ranks and suits on the hand to analyze the hand.
Post-condition: the function displays the card combination on the screen and 
returns corresponding winning odds (coefficient). */
int analyze_hand(const int ranks_in_hand[], const int suits_in_hand[]);

/* Display contents (collection of cards) of a hand.
Pre-condition: the function takes some hand.
Post-condition: the function displays contents of the hand on the screen. */
void display_hand(const Hand * p_hand);

/* Zero out some integer array (this is required for some intemediate operations).
Pre-condition: the function takes some integer array and its number of elements.
Post-condition: the function zeroes the array (set every element to zero). */
void zero_out(int arr[], int n);

#endif                  // For DRAW_POCKER_H_
