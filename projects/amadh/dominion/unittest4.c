#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

// set NOISY_TEST to 0 to remove printfs from output
//#define NOISY_TEST 1

int main()
{
	int player1 = 0;
	int player2 = 1;
	struct gameState state;
	
	int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse, sea_hag, tribute, smithy};

        initializeGame(2, k, 10, &state);
	
	int i=0;	
	state.deckCount[player1] = 1;
	state.deckCount[player2] = 1;
    	for (i = 0; i < state.deckCount[player1]; i++)
	{
		state.deck[player1][i] = 0;
	}
 	for (i = 0; i < state.deckCount[player2]; i++)
	{
		state.deck[player2][i] = 0;
	}


	int scoreForP1 = scoreFor(player1, &state);
	int scoreForP2 = scoreFor(player2, &state);
	printf("This will test the scoreFor() function.\n");
	printf("initial scores are only important to check if the scoreFor() works after adding a province to the deck\n");	
	printf("Score for player 1: %d \n", scoreForP1);
	printf("Score for player 2: %d \n", scoreForP2);
	
	printf("Now adding Provinces to scores for players 1 and 2\n");
	printf("The scores for this round should reflect adding a province to each of the players scores\n");

	state.deck[player1][0] = province;
	state.deck[player2][0] = province;
	scoreForP1 = scoreFor(player1, &state);
	scoreForP2 = scoreFor(player2, &state);

	printf("Score for player 1: %d \n", scoreForP1);
	printf("Score for player 2: %d \n\n", scoreForP2);
	
	
	
	return 0;
}
