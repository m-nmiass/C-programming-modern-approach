/************************************************************************
*   Program to calculate number of digits assuming max number is 9999   *
************************************************************************/

#include <stdio.h>

int main ()
{
	int i , j ;
	j = 0 ;

	printf ("Enter a number : ");
	scanf ("%d", &i);

	if (i < 10)
		j = 1 ;
	else if (i < 100)
		j = 2 ;
	else if (i < 1000)
		j = 3 ;
	else 
		j = 4 ;

	printf ("The number %d has %d", i, j) ;
}
