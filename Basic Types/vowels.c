/********************************************
*   counts number of vowels in a sentence   *
********************************************/

#include <stdio.h>

int main ()
{
	int i = 0 ;
	char a ;

	printf ("Enter a sentence :");

	while (( a = getchar()) != '\n' )
	{
		if ( a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == 'I' ||
				a == 'u' || a == 'U' || a == 'o' || a == 'O' )
			i++ ;
	}

	printf ("Your sentence contains %d vowels.", i );
}
