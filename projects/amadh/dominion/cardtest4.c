#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

// set NOISY_TEST to 0 to remove printfs from output
#define NOISY_TEST 1

int main()
{
int coin_bonus = 0;
int k[10] = {adventurer, great_hall, embargo, village, minion, mine, cutpurse, sea_hag, tribute, smithy};

int card = village;
int handPos = 0;
int choice1 = -1;
int choice2 = -1;
int choice3 = -1;
struct gameState state;

initializeGame(2, k, 10, &state);
printf("Cards in Hand before playing village: %d, %d, %d, %d, %d, %d, %d\n",state.hand[0][0], state.hand[0][1], state.hand[0][2], state.hand[0][3], state.hand[0][4], state.hand[0][5], state.hand[0][6]);
printf("Number of actions before playing village:%d\n", state.numActions);


cardEffect(card, choice1, choice2, choice3, &state, handPos, &coin_bonus);
printf("If the cards in hand have an additional card then that works properly\n");
printf("Cards in Hand after playing village: %d, %d, %d, %d, %d, %d, %d\n",state.hand[0][0], state.hand[0][1], state.hand[0][2], state.hand[0][3], state.hand[0][4], state.hand[0][5], state.hand[0][6]);
printf("If the number of actions has increased by two since before playing village, then it works: %d\n\n", state.numActions);


	return 0;
}
