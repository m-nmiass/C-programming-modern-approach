/******************************************
*   this program compute the value of e
*   1 + 1/1! + 1/2! + 1/3! + ... + 1/n!   *
******************************************/

#include <stdio.h>

int main ()
{
	float i, j, r, f ;
	f = 1 ;
	r = 1 ;

	printf ("Enter the value of n :");
	scanf ("%f", &i);

	while (i)
	{
		j = i ;
		while(j)
		{
			f = f * j ;
			j-- ;
		}
		r = r + 1.0f/f ;
		f = 1 ;
		i-- ;
	}

	printf ("The value of e is : %f", r);
}
