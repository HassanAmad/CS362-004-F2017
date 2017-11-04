#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>


// set NOISY_TEST to 0 to remove printfs from output
// #define NOISY_TEST 1

int main()
{
int coin_bonus = 0;
int k[10] = {adventurer, great_hall, embargo, village, minion, mine, cutpurse, sea_hag, tribute, smithy};

 printf("Performing great_hall  card random test:\n");
 int card = great_hall;
 int handPos = 0;


int choice1 = -1;
int choice2 = -1;
int choice3 = -1;
struct gameState state;
int max_players = 4;
int min_players = 2;

int i = 0;
int failure = 0;
for(i = 0; i<1000; i++)
{
	int players = rand() % (max_players + 1 - min_players) + min_players;
	initializeGame(players, k, rand()%1000, &state);
	cardEffect(card, choice1, choice2, choice3, &state, handPos, &coin_bonus);

	if(state.numActions==2)
	{
		////printf("test %d: Successful\n", i);
	}else
	{		
		failure++;
		printf("test %d: Failed\n", i);
	}

}
	if(failure)
	{
		printf("Test Failure: %d errors.\n", failure);
	}else
	{
		printf("Test Successful: No errors\n");
	}

        return 0;
}

