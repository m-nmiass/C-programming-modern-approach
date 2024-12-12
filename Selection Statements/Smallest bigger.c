/****************************************************************
*   The program will find the biggest and the smallest number   *
****************************************************************/

#include<stdio.h>

int main ()
{

	int a, b, c, d, s, bi ;

	printf ("Enter four integers : ") ;
	scanf ("%d %d %d %d", &a, &b, &c, &d) ;

	bi = s = a ;

	if ( b > bi )
		bi = b ;
        else 
		s = b ;
	
	if ( c > bi)
		bi = c ;
	else if ( c < s )
		s = c ;

	if ( d > bi )
		bi = d ;
	else if ( d < s )
		s = d ;

	printf ("The biggest number is : %d \nThe smallest number is : %d", bi, s );
}
		
