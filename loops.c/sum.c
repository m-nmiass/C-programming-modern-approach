/************************************
*   calculate the sum of integers   *
************************************/

#include <stdio.h>

int main ()
{
	int n = 1 , sum = 0 ;

	printf ("Enter integers ( 0 terminate ) : ") ;
	
	while (n)
	{
		scanf("%d", &n);
		sum += n ;
	}

	printf ("The sum is : %d", sum) ;
}
