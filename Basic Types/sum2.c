/***************************************************
*   upgraded program of sum using double not int   *
***************************************************/

#include <stdio.h>

int main ()
{

	double i, s ;
	s = 0 ;

	printf ("Enter a serie of integers ( 0 to terminate ) : ");
	
	do
	{
		scanf ("%lf", &i);
		s += i ;
	}while (i);

	printf ("The sums is %lf ", s );

}

