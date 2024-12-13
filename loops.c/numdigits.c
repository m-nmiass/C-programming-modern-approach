/*********************************
*   Calculate number of digits   *
*********************************/

#include <stdio.h>

int main ()
{
	int i, j ;
	j = 0 ;

	printf ("Enter an integer :");
	scanf ("%d", &i);

	do
	{
		i /= 10 ;
		j++ ;
	}while(i) ;

	printf ("The number has %d digit(s) :", j );
}
