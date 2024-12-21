/***************************************************************************
*   This program output the giving integers from smallest to the biggest   *
***************************************************************************/

#include <stdio.h>

void selection_sort (int a[], int n)
{

	if (n <= 1)
		return ;
	else
	{
		int i = 0 ;
		int j = 1 ;
		int b = a[i] ;
		int t ;
		while (j < n)
		{
			if (b >= a[j])
			       j++ ;
			else
			{
				i = j ;
				b = a[i] ;
				j++ ;
			}
		}
		t = b ;
		a[i] = a[n - 1];
	        a[n - 1] = t ;
		
		selection_sort(a, n-1);
	}
}	

int main ()
{
	int a[10] ;
	int i = 0 ;

	printf ("Enter 10 digits : ");

	while (i < 10)
		scanf ("%d", &a[i]), i++ ;

	selection_sort(a, 10);

	i = 0 ;

	while (i < 10)
		printf ("%d ", a[i]), i++ ;
}
