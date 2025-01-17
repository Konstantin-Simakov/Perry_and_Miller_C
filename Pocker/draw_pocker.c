/* draw_pocker.c 
Main source file of the program.
Compile: "gcc draw_pocker.c draw_pocker_sup.c -Wall -pedantic" */

/* The program is a one-user game of "Draw pocker".
Users can play as often as they want, making bets from 1 to 5.
Users are dealt 5 cards, after which the user must decide which cards to keep and which to replace. 
The newly dealt cards are then evaluated, after which the user is rewarded based on their hand. 
The user's updated bankroll is then displayed, and they are given the option to continue playing. */

#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "draw_pocker.h"

int main(void)
{
    int card_rank[HAND];
    int card_suit[HAND];
    int final_rank[HAND];
    int final_suit[HAND];
    int ranks_in_hand[RANKS];
    int suits_in_hand[SUITS];
    int winnings, prize;
    char still_play;
    int bet;
    int bank = 100;
    int i;

    srand(time(0));
    print_greeting();

    do
    {
        bet = get_bet();

        get_first_hand(card_rank, card_suit, HAND);
        printf("Here is your %d cards:\n", HAND);
        display_hand(card_rank, card_suit, HAND);

        for (i = 0; i < RANKS; ++i)
            ranks_in_hand[i] = 0;
        for (i = 0; i < SUITS; ++i)
            suits_in_hand[i] = 0;

        get_final_hand(card_rank, final_rank, card_suit, final_suit, HAND, 
                    ranks_in_hand, suits_in_hand);
        printf("Your last batch of cards:\n");
        display_hand(final_rank, final_suit, HAND);

        winnings = analyze_hand(ranks_in_hand, RANKS, suits_in_hand, SUITS);
        prize = bet * winnings;
        printf("You win %d credits!\n", prize);
        bank = bank - bet + prize;
        printf("You have %d in your bank.\n", bank);

        printf("Do you want to play again? ");
        scanf(" %c", &still_play);
    } while (toupper(still_play) == 'Y');
    puts("Bye!");

    return 0;
}
