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

printf("playing adventurer\n");

//
int card = smithy;
int handPos = 0;
int choice1 = -1;
int choice2 = -1;
int choice3 = -1;
struct gameState state;

initializeGame(2, k, 10, &state);

printf("playing card\n");

cardEffect(card, choice1, choice2, choice3, &state, handPos, &coin_bonus);


	return 0;
}
