/***************************************************
*   This program calculate the power of a number   *
*   	    if n is even x^n = (x^(n/2))2          *
*   	    if n is odd x^n = x *x(n - 1)          * 
***************************************************/

#include <stdio.h>

int power (int x, int n)
{
	if (n == 0)
		return 1 ;
	if (n % 2 == 0)
		return power (x , n/2) * power (x, n/2) ;
	if (n % 2 != 0)
		return x * ( power (x, n - 1)) ;
}

int main ()
{
	int x , n ;
	printf ("Enter the the power in form x^n : ");
	scanf ("%d^%d", &x, &n);
	printf ("%d", power(x,n));
}	
