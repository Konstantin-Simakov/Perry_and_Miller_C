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
    Hand first_hand;            // The hand of the first deal.
    Hand final_hand;            // The hand of the final hand.
    int ranks_in_hand[RANKS];
    int suits_in_hand[SUITS];
    int win_factor, prize;
    char still_play;
    int bet;
    int bank = 100;             // Initial bank.

    srand(time(0));
    print_greeting();

    do
    {
        bet = get_bet();

        get_first_hand(&first_hand);
        printf("Here is your %d cards:\n", HAND);
        display_hand(&first_hand);

        zero_out(ranks_in_hand, RANKS);
        zero_out(suits_in_hand, SUITS);

        get_final_hand(&final_hand, &first_hand, ranks_in_hand, suits_in_hand);
        printf("Your last batch of cards:\n");
        display_hand(&final_hand);

        win_factor = analyze_hand(ranks_in_hand, suits_in_hand);
        prize = bet * win_factor;
        printf("You win %d credits!\n", prize);
        bank = bank - bet + prize;
        printf("You have %d in your bank.\n", bank);

        printf("Do you want to play again? ");
        scanf(" %c", &still_play);
    } while (toupper(still_play) == 'Y');
    puts("Bye!");

    return 0;
}
