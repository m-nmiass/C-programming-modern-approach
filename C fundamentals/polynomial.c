/****************************************
*   3X^5 + 2X^4 - 5X^3 - X^2 + 7X - 6   *
****************************************/

#include <stdio.h>

int main ()
{
	int x ;

	printf ("Enter the value for x :");
	scanf ("%d" ,&x);

	printf("3X^5 + 2X^4 - 5X^3 - X^2 + 7X - 6 : %d " ,( 3 * x * x * x * x * x ) + ( 2 * x * x * x * x ) -( 5 * x * x * x ) - ( x * x ) + 7 * x - 6 ) ;
}
