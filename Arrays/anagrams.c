/*******************************************************
*   This program check if the two words are anagrams   *
*******************************************************/

#include <stdio.h>
#include <stdbool.h>

int main ()
{
	int check [26] = {0} ;
	char c ;
	int i = 0 ;

	printf ("Enter first word : ");
	while((c = getchar ()) != '\n')
	{
		if ( c >= 'A' && c <= 'Z' )
			c = c - 'A' + 'a' ;
		check[(int)(c - 'a')]++ ;
	}

	printf ("Enter the second word : ");
	while((c = getchar ()) != '\n')
	{
		if ( c >= 'A' && c <= 'Z' )
			c = c - 'A' + 'a' ;
		check[(int)(c - 'a')]-- ;
	}

	while (i < 26)
	{
		if (check[i])
			break ;
		i++ ;
	}


	if (i == 26)
		printf ("The words are anagrams");
	else
		printf ("The words are not anagrams");
}
