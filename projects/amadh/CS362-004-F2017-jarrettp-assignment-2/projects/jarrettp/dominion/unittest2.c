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

//	printf("province number = %d", province);	
	//Test 1: game should not be over when game just begins
	int gameOver = isGameOver(&G);
	if(gameOver)
	{
		printf("Failure: Game should not be over at right after initialization of game\n\n");
	}else
	{
		printf("Success: Game over test succeeded. Game was not supposed to be over at start of game, and it wasnt\n\n");
	}

	//Test 2: If Province count == 0 game should be over
	if (G.supplyCount[province]==0)
	{
		gameOver = isGameOver(&G);
		if(gameOver)
		{
			printf("Success: Game should be over when province count is 0\n\n");
		}else
		{
			printf("Failure: Game should not be over when province count is 0\n\n");
		}
	}
	//Test 3: If Province is greater than 0 game should not be over
	G.supplyCount[province]=1;
	gameOver = isGameOver(&G);
	if(gameOver==1)
	{
		printf("Failure: Game should not be over when province count is greater than 0\n\n");
	}
	else if(gameOver==0)
	{
		printf("Success: Game should be over when province count is greater than 0\n\n");
	}
  return 0;
}
