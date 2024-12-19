/*****************************************************************
*   reads 5*5 array and print the row sums and the column sums   *
*****************************************************************/

#include<stdio.h>

int main()
{
	int a[5][5] ;
	int i, j ;
	int s = 0 ;

	i = 0, j = 0 ;

	while (i < 5)
	{
		printf ("Enter row %d : ", i+1) ;
		while (j < 5)
		{
			scanf ("%d", &a[i][j]);
			j++ ;
		}
		j = 0 ;
		i++ ;
	}

	i = 0 ;
	printf ("Row totals : ") ;

	while (i < 5)
	{
		while (j < 5)
			s += a[i][j++] ;
		j = 0 ;
		i++ ;
		printf ("%d  ", s);
		s = 0 ;
	}

	printf ("\n");
	i = 0, j = 0 ;
	printf ("Column totals : ");

	while (j < 5)
	{
		while (i < 5)
			s += a[i++][j] ;
		i = 0 ;
		j++ ;
		printf ("%d  ", s);
		s = 0 ;
	}
}	
