/******************************************
*   prints all even squares from 1 to n   *
******************************************/

#include<stdio.h>

int main ()
{
	int n, i ;
	i = 1 ;

	printf ("This program prints all even numbers to n\nEnter n : ");
	scanf ("%d", &n);
	
	while (i*i <= n)
	{
		if (i*i % 2 == 0)
			printf ("%d\n", i*i);
		i++ ;
	}
}
