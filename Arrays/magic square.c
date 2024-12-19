/***************************************************************
*   This program calculate the magic square of an odd number   *
*                         from 0 to 99                         *
***************************************************************/

#include <stdio.h>

int main ()
{
	int n ;
	int i, j ;

	printf ("Enter size of magic square (odd number between 1 - 99) : ");
	scanf ("%d", &n);

	int a[99][99] = {0} ;
	int c = 2   ;
	j = (n-1)/2, i = 0 ;
	a[i][j] = 1 ;
	int k = i ;
	int l = j ;

	while (c <= n*n)
	{
		if (i == 0)
			i = n - 1 ;
		else 
			i-- ;

		if (j == n - 1)
			j = 0 ;
		else
			j++ ;

		if (a[i][j] != 0)
		{
			i = k + 1 ;
			j = l ;
			a[i][j] = c ;
		}
		else 
			a[i][j] = c ;
		k = i ;
		l = j ;
		c++ ;
	}

	i = 0, j = 0 ;

	while (i < n)
	{
		while (j < n)
			printf ("%d  ", a[i][j++]);
		i++ ;
		j = 0 ;
		printf ("\n");
	}
}

