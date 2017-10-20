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
	int player1 = 0;
	int player2 = 1;
	struct gameState state;
	
	int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse, sea_hag, tribute, smithy};

        initializeGame(2, k, 10, &G);
	int scoreForP1 = scoreFor(player1, &state);
	int scoreForP2 = scoreFor(player2, &state);
	printf("This will test the scoreFor() function.\n");
	printf("initial scores should be 0\n");
	printf("Score for player 1: %d \n", scoreForP1);
	
	
	return 0;

