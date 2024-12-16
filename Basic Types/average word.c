/*****************************************************
*   This program calculate the average word length   *
*****************************************************/

#include <stdio.h>

int main ()
{
	int w = 1, ch = 0, f = 0 ;
	char c ;

	printf ("Enter a sentence : ");

	while (( c = getchar()) != '\n' )
	{
		if ( c == ' ' )
			{
				if ( f == 0 )
					f++, w++ ;
			}
		else
			f = 0, ch++ ;
	}
	printf ("Average word length : %.2f", (float)ch/w);
}
