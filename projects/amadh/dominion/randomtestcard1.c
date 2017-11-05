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
int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse, sea_hag, tribute, smithy};

 printf("Performing village card random test:\n");
 int card = village;
 int handPos = 0;


int choice1 = -1;
int choice2 = -1;
int choice3 = -1;
struct gameState state;
int max_players = 4;
int min_players = 2;

int i = 0;
int failure = 0;
for(i = 0; i<100; i++)
{
	int players = rand() % (max_players + 1 - min_players) + min_players;
	initializeGame(players, k, rand()%1000, &state);
	cardEffect(card, choice1, choice2, choice3, &state, handPos, &coin_bonus);

	if((state.hand[0][5]!=0)&&state.numActions==3)
	{
		//printf("test %d: Successful\n", i);/
	}else
	{
		failure++;
		printf("test %d: Failed\n", i);
		printf("Cards in Hand after playing village: %d, %d, %d, %d, %d, %d, %d\n\n",state.hand[0][0], state.hand[0][1], state.hand[0][2], state.hand[0][3], state.hand[0][4], state.hand[0][5], state.hand[0][6]);

		printf("number of actions: %d", state.numActions);
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

