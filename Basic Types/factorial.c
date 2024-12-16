/******************************************
*   calculate the factorial of a number   *
******************************************/

#include<stdio.h>

int main ()
{
	long long int i, r ;
	r = 1 ;

	printf ("Enter a positive value : ");
	scanf ("%lli", &i) ;
	
	while (i)
	{
		r *= i ;
		i-- ;
	}

	printf ("%lli", r );
}

