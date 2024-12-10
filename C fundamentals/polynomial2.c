/*****************************************
*   ((((3X + 2)X - 5)X - 1)X + 7)X - 6   *
*	       "Horner's Rule"           *
*****************************************/

#include <stdio.h>

int main () 
{
	int x ;

	printf ("Enter the value of x :");
	scanf ("%d" ,&x) ;

	printf ("The result is : %d" , ((((3*x + 2) * x - 5) * x - 1) * x  + 7 ) * x - 6) ;
}
