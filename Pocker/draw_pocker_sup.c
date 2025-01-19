/* draw_pocker_sup.c */
/* Supporting source file for draw_pocker.c. 
Compile: "gcc draw_pocker.c draw_pocker_sup.c -Wall -pedantic" */

#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "draw_pocker.h"

/*------------------------------------------------------------------------*/
void display_hand(const Hand * p_hand)
{
    int i;
    char str[SIZE];
    char suit;
    char * rank;

    for (i = 0; i < HAND; ++i)
    {
        suit = get_suit(p_hand->card_suits[i]);
        rank = get_rank(p_hand->card_ranks[i], str);

        printf("Card #%d: %s%c\n", i + 1, rank, suit);
    }
}

/*------------------------------------------------------------------------*/
void print_greeting(void)
{
    printf("***********************************************************\n");
    printf("\n\tWelcome to the casino for newbies!\n");
    printf("\tHouse of video draw pocker\n\n");
    printf("***********************************************************\n");
    printf("That\'s rules:\n");
    printf("Your start balance is 100 credits, you have to bet from 1 to %d credits.\n", HAND);
    printf("If you have given %d cards, you have to choose which cards to stay and which ones to drop.\n", HAND);
    printf("You should get the best combination possible.\n");
    printf("\nBelow is a table of winnings (based on a bet of 1 credit):\n");
    printf("Pair\t\t\t\t1 credit\n");
    printf("Two pairs\t\t\t2 credits\n");
    printf("Three pairs of one kind\t\t3 credits\n");
    printf("Straight\t\t\t4 credits\n");
    printf("Flash\t\t\t\t5 credits\n");
    printf("Flash royal\t\t\t20 credits\n");
    printf("***********************************************************\n");
    printf("Enjoy!\n\n");
}

/*------------------------------------------------------------------------*/
void zero_out(int arr[], int n)
{
    int i;

    for (i = 0; i < n; ++i)
        arr[i] = 0;
}

/*------------------------------------------------------------------------*/
char get_suit(int num_suit)
{
    char suit = 0;

    switch (num_suit)
    {
        case 0: suit = 's';     // Spades.
            break;
        case 1: suit = 'd';     // Diamonds.
            break;
        case 2: suit = 'h';     // Hearts.
            break;
        case 3: suit = 'c';     // Clubs.
            break;
    }

    return suit;
}

/*------------------------------------------------------------------------*/
char * get_rank(int num_rank, char * rank)
{
    switch (num_rank)
    {
        case 0: strcpy(rank, "A");      // Ace.
            break;
        case 1: strcpy(rank, "K");      // King.
            break;
        case 2: strcpy(rank, "2");
            break;
        case 3: strcpy(rank, "3");
            break;
        case 4: strcpy(rank, "4");
            break;
        case 5: strcpy(rank, "5");
            break;
        case 6: strcpy(rank, "6");
            break;
        case 7: strcpy(rank, "7");
            break;
        case 8: strcpy(rank, "8");
            break;
        case 9: strcpy(rank, "9");
            break;
        case 10: strcpy(rank, "10");
            break;
        case 11: strcpy(rank, "J");     // Jack.
            break;
        case 12: strcpy(rank, "Q");     // Queen.
            break;
        default: strcpy(rank, "");      // Empty string.
    }

    return rank;
}

/*------------------------------------------------------------------------*/
int get_bet(void)
{
    int bet;

    do
    {
        printf("What is your bet? (From 1 to %d or <= 0 to quit) ", MAX_BET);
        scanf(" %d", &bet);
        if (bet <= 0)
        {
            printf("Program terminating. Bye!\n");
            exit(EXIT_FAILURE);
        }
    } while (bet < 0 || bet > MAX_BET);

    return bet;
}

/*------------------------------------------------------------------------*/
void get_first_hand(Hand * p_first_hand)
{
    int i, j;
    bool card_dup;

    for (i = 0; i < HAND; ++i)
    {
        card_dup = false;
        do
        {
            p_first_hand->card_ranks[i] = rand() % RANKS;
            p_first_hand->card_suits[i] = rand() % SUITS;

            // This loop guarantees that the given pair will unique.
            for (j = 0; j < i; ++j)
            {
                if (p_first_hand->card_ranks[i] == p_first_hand->card_ranks[j] &&
                    p_first_hand->card_suits[i] == p_first_hand->card_suits[j])
                {
                    card_dup = true;
                }
            }
        } while (card_dup);
    }
}

/*------------------------------------------------------------------------*/
void get_final_hand(Hand * p_final_hand, const Hand * p_first_hand, 
    int ranks_in_hand[], int suits_in_hand[])
{
    int i, j;
    char str[SIZE];
    bool card_dup;
    char suit;
    char * rank;
    char ans;

    for (i = 0; i < HAND; ++i)
    {
        suit = get_suit(p_first_hand->card_suits[i]);
        rank = get_rank(p_first_hand->card_ranks[i], str);

        printf("Do you want to draw a card #%d: %s%c? (Y/N) ", 
            i + 1, rank, suit);
        scanf(" %c", &ans);
        if ('N' == toupper(ans))
        {
            p_final_hand->card_ranks[i] = p_first_hand->card_ranks[i];
            p_final_hand->card_suits[i] = p_first_hand->card_suits[i];
        }
        else if ('Y' == toupper(ans))
        {
            do
            {
                card_dup = false;
                p_final_hand->card_ranks[i] = rand() % RANKS;
                p_final_hand->card_suits[i] = rand() % SUITS;

                for (j = 0; j < HAND; ++j)
                {
                    if (p_final_hand->card_ranks[i] == p_first_hand->card_ranks[j] &&
                        p_final_hand->card_suits[i] == p_first_hand->card_suits[j])
                    {
                        card_dup = true;
                    }
                }

                for (j = 0; j < i; ++j)
                {
                    if (p_final_hand->card_ranks[i] == p_final_hand->card_ranks[j] && 
                        p_final_hand->card_suits[i] == p_final_hand->card_suits[j])
                    {
                        card_dup = true;
                    }
                }
            } while (card_dup);
        }
        ranks_in_hand[p_final_hand->card_ranks[i]]++;
        suits_in_hand[p_final_hand->card_suits[i]]++;
    }
}

/*------------------------------------------------------------------------*/
int analyze_hand(const int ranks_in_hand[], const int suits_in_hand[])
{
    int win_factor = 0;     // The winning factor for a player.
    int num_consec = 0;     // The number of consecutive cards.
    int rank, suit;
    int pairs;              // The number of pairs (one or two).
    bool three, four, flush, straight;

    pairs = 0;
    three = four = flush = straight = false;
    for (suit = 0; suit < SUITS; ++suit)
        if (HAND == suits_in_hand[suit])
            flush = true;        
        
    rank = 0;
    while (0 == ranks_in_hand)
        ++rank;
    while (rank < RANKS && ranks_in_hand[rank])
    {
        ++num_consec;
        ++rank;
    }
    if (HAND == num_consec)
        straight = true;

    for (rank = 0; rank < RANKS; ++rank)
    {
        if (2 == ranks_in_hand[rank])
            ++pairs;
        else if (3 == ranks_in_hand[rank])
            three = true;
        else if (4 == ranks_in_hand[rank])
            four = true;
    }

    if (straight && flush)
    {
        printf("Royal Flush\n\n");
        win_factor = 20;
    }
    else if (four)
    {
        printf("Four of a kind\n\n");
        win_factor = 10;
    }
    else if (three && (1 == pairs))
    {
        printf("Full House\n\n");
        win_factor = 8;
    }
    else if (flush)
    {
        printf("Flush\n\n");
        win_factor = 5;
    }
    else if (straight)
    {
        printf("Straight\n\n");
        win_factor = 4;
    }
    else if (2 == pairs)
    {
        printf("Two Pairs\n\n");
        win_factor = 2;
    }
    else if (1 == pairs)
    {
        printf("Pair\n\n");
        win_factor = 1;
    }
    else 
    {
        printf("High card\n\n");
        win_factor = 0;
    }

    return win_factor;
}
