/*******************************
*   sums a series of integer   *
*******************************/

#include<stdio.h>

int main ()
{
	int i ;
	long long int s = 0 ;
	
	printf("Enter integers (0 to terminate): ");

	do
	{
		scanf ("%d", &i);
		s += i ;
	}while (i) ;

	printf ("The sum is : %lld", s);
}
