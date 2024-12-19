/*******************************
*   Show the repeated dogits   *
*******************************/

#include<stdio.h>

int main ()
{
	int a[10] = {0} ;
	char i ;
	int j = 0 ;

	printf ("Enter the number : ");

	while((i = getchar()) != '\n')
		a[((int)i - 48)]++ ;

	printf ("Repeated digits : ");

	while (j < 10)
	{
		if (a[j] > 1)
			printf ("%d  ", j);
		j++ ;
	}
}
