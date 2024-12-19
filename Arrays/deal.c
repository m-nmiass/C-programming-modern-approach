/*************************************
*   pick random card from the deck   *
*************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main ()
{
	bool check [4][13] = {0} ;

	const char rank [13] = {'2', '3', '4', '5', '6', '7', '8', '9',
		't', 'j', 'q', 'k', 'a' } ;
	const char suit [4] = {'c', 'd', 'h', 's'} ;

	int n, i, j ;
	srand (time(NULL)) ;

	printf ("Enter number of cards in hand ");
	scanf ("%d", &i);

	while (i > 0)
	{
		n = rand() % 4 ;
		j = rand() % 13 ;

		if (!check[n][j])
		{
			check[n][j] = 1 ;
			printf ("%c%c ", rank[j], suit[n]);
			i-- ;
		}
	}
}
