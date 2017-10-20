#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <limits.h>

// set NOISY_TEST to 0 to remove printfs from output
#define NOISY_TEST 1


void equalityAssertion(int a, int b);
int main()
{
	int k1 = INT_MIN;
	int k2 = -1;
	int k3 = 0;
	int k4 = 1;
	int k5 = INT_MAX;
	int k6 = 0;
	int k7 = 0;
	int k8 = 0;
	int k9 = 0;
	int k10 = 0; 

	int* cards = kingdomCards(k1, k2, k3, k4, k5, k6, k7, k8, k9, k10);	
	

	printf("These next tests are testing kingdomCards() and they should print successful\n");
	equalityAssertion(k1, cards[0]);
	equalityAssertion(k2, cards[1]);
	equalityAssertion(k3, cards[2]);
	equalityAssertion(k4, cards[3]);
	equalityAssertion(k5, cards[4]);
	
	return 0;
}

void equalityAssertion(int a, int b)
{
	if(a == b)
	{
		printf("Success: equlity assertion passed\n");
	}else
	{
		printf("Failure: equality assertion failed\n");
	}
}
