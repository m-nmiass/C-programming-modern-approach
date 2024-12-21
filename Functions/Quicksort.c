/*******************************************************************
*   Enter a string of integer and the program sort them in order   *
*******************************************************************/

#include <stdio.h>

void Quicksort (int a[], int high, int low)
{
	int pov = a[high] ;
	if (high > low)
	{
		int i = low - 1 ;
		int t ;
		int j = low ;

		while (j < high)
		{
			if (a[j] > pov)
				j++ ;
			else
			{
				i++;
				t = a[i];
				a[i] = a[j] ;
				a[j] = t ;
				j++ ;
			}
		}
		t = a[i + 1] ;
		a[i + 1] = a[high] ;
		a[high] = t ;

		Quicksort (a, i, low);
		Quicksort (a, high, i + 2);
	}
}

int main ()
{
	int a[10] ;
	int i = 0 ;

	printf ("Enter 10 numbers : ");
	while (i < 10)
		scanf ("%d", &a[i]), i++ ;

	Quicksort (a, 9, 0);

	i = 0 ;
	while (i < 10)
		printf ("%d ", a[i]), i++ ;
}
