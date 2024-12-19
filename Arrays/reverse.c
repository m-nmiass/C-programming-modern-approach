/********************************************************
*   Enter 10 digits and the program will reverse them   *
********************************************************/

#include<stdio.h>

int main()
{
	int i ;
	int a [10] ;
	i = 0 ;

	printf ("Enter 10 Numbers : ") ;

	while ( i < 10 )
		scanf ("%d", &a[i++]);
	i-- ;
	printf ("In reverse order : ") ;

	while (i >= 0)
		printf ("%2d ", a[i--]);
}
