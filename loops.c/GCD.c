/********************************************
*   calculate GCD using Eulid's algorithm   *
********************************************/

#include<stdio.h>

int main ()
{
	int n, m, t ;

	printf ("Enter two integers : ");
	scanf ("%d %d", &n, &m);

	if (n > m)
	{
		n = t ;
		n = m ;
		m = t ;
	}

	while (n)
	{
		t = m % n ;
		m = n ;
		n = t ;
	}

	printf ("The great common divisor : %d", m);
}	
