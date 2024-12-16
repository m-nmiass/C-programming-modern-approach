/*****************************************************************
*   using Newton method to compute the root of positive number   *
*****************************************************************/

#include <stdio.h>

int main ()
{
	float x, y, a ;

	y = 1 ;

	printf ("Enter positive number : ");
	scanf ("%f", &x);

	a = x/y - y ;

	while (1)
	{
		a = (x/y + y) / 2 ;
		if ( a == y )
			break ;
		y = a ;
	}

	printf ("Square root is : %f", a);
}	
