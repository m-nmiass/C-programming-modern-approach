/***********************************************************************
*   This program allow the user to enter all digits at the same time   *
***********************************************************************/

#include <stdio.h>

int main ()
{
	int a, b, c, d, e, f, g, h, i, j, k ;

	printf ("Enter the first 11 Digits of a UPC :");
	scanf ("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k );

	a = ( a + c + e + g + i + k ) * 3 ;
	a = a + b + d + f + h + j - 1 ;
	a = 9 - a % 10 ;

	printf ("The chack number is : %d", a );
}
