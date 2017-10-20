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
	

	struct gameState G;
        int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
           sea_hag, tribute, smithy};

        initializeGame(2, k, 10, &G);


	printf("This will test the whoseTurn() and endTurn() functions in dominion.c.\n");

	int who = whoseTurn(&G);	
	printf("Whose turn? %d\n", who);
	endTurn(&G);
	printf("Ending turn..\n");

	who = whoseTurn(&G);
	printf("Whose turn? %d\n", who);	
	endTurn(&G);
	printf("Ending turn..\n");

	who = whoseTurn(&G);
	printf("Whose turn? %d\n", who);	
	endTurn(&G);
	printf("Ending turn..\n");

	who = whoseTurn(&G);
	printf("Whose turn? %d\n", who);	
	endTurn(&G);
	printf("Ending turn..\n");

	who = whoseTurn(&G);
	printf("Whose turn? %d\n", who);	
	endTurn(&G);
	printf("Ending turn..\n");

	who = whoseTurn(&G);
	printf("Whose turn? %d\n", who);	
	endTurn(&G);
	printf("Ending turn..\n");

	return 0;
}
