/***************************************************
*   improved version of the program magic square   *
***************************************************/

#include <stdio.h>

void creat_magic_square(int n, int a[n][n])
{
	int k = 2 ;
	int i = 0 ;
	int j = n/2 ;
	a[i][j] = 1 ;
	int m = i ;
	int l = j ;

	while (k <= n*n)
	{
		if (j == n - 1)
			j = 0 ;
		else 
			j++ ;

		if (i == 0)
			i = n - 1 ;
		else
			i-- ;

		if (a[i][j] == 0)
			a[i][j] = k++ ;
		else
		{
			i = m + 1 ;
			j = l ;
			a[i][j] = k++ ;
		}
		m = i ;
		l = j ;
	}
}

void print_magic_square(int n, int a[n][n])
{
	int i = 0 ;
	int j = 0 ;

	while (i < n)
	{
		while (j < n)
		{
			printf ("%3d ", a[i][j]);
			j++ ;
		}
		printf ("\n");
		i++ ;
		j = 0 ;
	}
}

void zero_array (int n, int a[n][n])
{
	int i = 0 ;
	int j = 0 ;
	while (i < n)
	{
		while (j < n)
		{
			a[i][j] = 0 ;
			j++ ;
		}
		j = 0 ;
		i++ ;
	}
}

int main ()
{
	int n ;
	int a[99][99] ;

	printf ("Enter size of magic square : ");
	scanf ("%d", &n);
	
	zero_array(n,a);
	creat_magic_square(n,a);
	print_magic_square(n,a);
}
