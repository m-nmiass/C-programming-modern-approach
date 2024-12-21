/***********************************************
*   Improved version of the program anagrams   *
***********************************************/

#include <stdio.h>
#include <stdbool.h>

void read_word(int count[26])
{
	char c ;
	int i ;

	while ((c = getchar()) != '\n')
	{
		i = (int)c - 97 ;
		count[i]++ ;
	}
}

bool equal_array(int count1[26], int count2[26])
{
	int i = 0 ;
	while (i < 26)
	{
		if (count1[i] != count2[i])
			return 0;
		i++ ;
	}
	return 1 ;
}

int main ()
{
	int a[26] = {0} ;
	int b[26] = {0} ;

	printf ("Enter the first word : ");
	read_word(a) ;

	printf ("Enter the second word : ");
	read_word(b) ;

	if (equal_array(a, b))
		printf ("Words are anagrams .");
	else
		printf ("Words are not anagrams .");
}
