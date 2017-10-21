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
int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse, sea_hag, tribute, smithy};

printf("playing smithy\n");

//
int card = smithy;
int handPos = 0;
int choice1 = -1;
int choice2 = -1;
int choice3 = -1;
struct gameState state;

initializeGame(2, k, 10, &state);
printf("Cards in Hand before playing adventurer: %d, %d, %d, %d, %d, %d, %d, %d,%d\n",state.hand[0][0], state.hand[0][1], state.hand[0][2], state.hand[0][3], state.hand[0][4], state.hand[0][5], state.hand[0][6], state.hand[0][7], state.hand[0][8]);

printf("playing smithy\n");

cardEffect(card, choice1, choice2, choice3, &state, handPos, &coin_bonus);
printf("If the cards in hand have an additional three cards then we should be confident that smithy is working\n");
printf("Cards in Hand after playing adventurer: %d,%d, %d, %d, %d, %d, %d, %d,%d\n",state.hand[0][0], state.hand[0][1], state.hand[0][2], state.hand[0][3], state.hand[0][4], state.hand[0][5], state.hand[0][6], state.hand[0][7], state.hand[0][8]);



	return 0;
}
