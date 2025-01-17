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

#define HAND    5
#define RANKS   14
#define SUITS   4
#define SIZE    3       // The size of C string 'rank'.
#define MAX_BET 5       // The max bet of credits.

void print_greeting(void);
int get_bet(void);
char get_suit(int num_suit);
char * get_rank(int num_rank, char * rank);
void get_first_hand(int card_rank[], int card_suit[], int hand);
void get_final_hand(const int card_rank[], int final_rank[], 
                    const int card_suit[], int final_suit[], int hand,
                    int ranks_in_hand[], int suits_in_hand[]);
int analyze_hand(int ranks_in_hand[], int ranks, int suits_in_hand[], int suits);
void display_hand(const int card_rank[], const int card_suit[], int hand);

#endif                  // For DRAW_POCKER_H_
